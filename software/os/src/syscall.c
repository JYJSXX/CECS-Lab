#include <debug.h>
#include "syscall.h"
#include <sys/time.h>
#include <mem.h>
#include <fs.h>
#include <proc.h>

void syscall_handle(Context *c) {
  uintptr_t a[4];
  a[0] = c->SYS_NUM;
  a[1] = c->SYS_ARG1;
  a[2] = c->SYS_ARG2;
  a[3] = c->SYS_ARG3;
  switch (a[0]) {
    /*为了简单起见，SYS_yield系统调用只需要调用内核中定义的 yield 函数即可。对于 SYS_exit，你只需要在处理中插入 halt(0) 即可。完成后运行 dummy 测试，你会得到 HIT_GOOD_TRAP 的提示，这代表你已经成功处理了 SYS_exit 系统调用。*/
    case SYS_exit: {
      // Lab7 TODO: exit the current process
        halt(0);
      break;
    }
    case SYS_yield: {
      // Lab7 TODO: yield the current process
        yield();
      break;
    }
    case SYS_write: {
      // Lab7 TODO: use `fs_write` to write the file with fd from offset by buf
        c->SYS_RET = fs_write(a[1], (void *)a[2], a[3]);
        break;
    }
    case SYS_open: {
      // Lab7 TODO: open the file with name = (char *)a[1]
      c->SYS_RET = fs_open((char *)a[1], 0, 0);
      break;
    }
    case SYS_read: {
      // Lab7 TODO: read the file with fd from offset into buf
      c->SYS_RET = fs_read(a[1], (void *)a[2], a[3]);
      break;
    }
    case SYS_lseek: {
      // Lab7 TODO: seek the file with fd from the offset based on whence
        c->SYS_RET = fs_lseek(a[1], a[2], a[3]);
        break;
    }
    case SYS_close: {
      // Lab7 TODO: close the file with fd
        c->SYS_RET = fs_close(a[1]);
        break;
    }
    case SYS_gettimeofday: {
      size_t time = io_read(DEV_TIMER_UPTIME).us;
      ((struct timeval *)a[1])->tv_sec = time / 1000000;
      ((struct timeval *)a[1])->tv_usec = time % 1000000;
      c->SYS_RET = 0;
      break;
    }
    case SYS_execve: {
      user_naive_load((const char *) a[1]);
      c->SYS_RET = 0;
      break;
    }
    case SYS_brk: {
      c->SYS_RET = mm_brk(a[1]); 
      break;
    }
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
