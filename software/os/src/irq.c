#include <debug.h>
#include <proc.h>
#define ECALL_FROM_M 0xb
#define SYSCALL_YIELD 0xffffffff

void syscall_handle(Context *c);
static Context* __event_handle(Event e, Context* c);

Context* __irq_handle(Context *c) {
  Event ev = {0};
  switch (c->mcause) {
    // Lab7 TODO: implement EVENT_SYSCALL and EVENT_YIELD

    /*
    在操作系统启动之初，通过一系列的初始化操作，操作系统会将 __trap_vector 函数（定义在 trap.S 中）的入口地址写入 mtvec 寄存器中；
    一旦发生了系统调用，或者其他异常，处理器就会跳转到 __trap_vector 函数中，执行相应的处理；
    __trap_vector 函数会将所有的通用寄存器和异常处理相关的部分 CSR 保存到栈上，之后调用 __irq_handle 函数；
    __irq_handle 这个函数会根据保存在栈中上下文的 mcause 来判断当前触发的是异常还是中断。当确认了是系统调用异常时，会再根据约定，查看栈中的 a7 寄存器用以生成事件号。事件分为很多种，其中就包括 EVENT_SYSCALL，这个事件就是系统调用；
    当识别了事件后，__irq_handle 函数会将事件保存到一个事件结构体中，并调用 __event_handle 函数，这个函数会根据事件号，调用相应的处理函数。在我们的系统中，系统调用的处理函数为 syscall_handle 函数。
    */

    case ECALL_FROM_M: {
      switch(c->gpr[17]){
        case SYSCALL_YIELD: ev.event = EVENT_YIELD; break;
        default: ev.event = EVENT_SYSCALL; break;
      } break;
    }
    

    default: ev.event = EVENT_ERROR; break;
  }
  c = __event_handle(ev, c);
  assert(c != NULL);
  return c;    
}


static Context* __event_handle(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD:
      c->mepc += 4;
      break;
    case EVENT_SYSCALL:
      syscall_handle(c);
      c->mepc += 4;
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

extern void __trap_vector(void);

void yield() {
  asm volatile("li a7, -1; ecall");
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  asm volatile("csrw mtvec, %0" : : "r"(__trap_vector));
}
