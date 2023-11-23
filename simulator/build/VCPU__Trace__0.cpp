// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
        bufp->chgIData(oldp+2,(vlSelf->CPU__DOT__pc_if2),32);
        bufp->chgIData(oldp+3,(vlSelf->CPU__DOT__pc_id),32);
        bufp->chgIData(oldp+4,(vlSelf->CPU__DOT__pc_ex),32);
        bufp->chgIData(oldp+5,(vlSelf->CPU__DOT__pc_ls),32);
        bufp->chgIData(oldp+6,(vlSelf->CPU__DOT__pc_wb),32);
        bufp->chgIData(oldp+7,(vlSelf->CPU__DOT__inst_if2),32);
        bufp->chgIData(oldp+8,(vlSelf->CPU__DOT__inst_id),32);
        bufp->chgIData(oldp+9,(vlSelf->CPU__DOT__inst_ex),32);
        bufp->chgIData(oldp+10,(vlSelf->CPU__DOT__inst_ls),32);
        bufp->chgIData(oldp+11,(vlSelf->CPU__DOT__inst_wb),32);
        bufp->chgIData(oldp+12,(vlSelf->CPU__DOT__pc_target),32);
        bufp->chgIData(oldp+13,(((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
        bufp->chgIData(oldp+14,(vlSelf->CPU__DOT__imm_id),32);
        bufp->chgIData(oldp+15,(vlSelf->CPU__DOT__imm_ex),32);
        bufp->chgIData(oldp+16,(vlSelf->CPU__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+17,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                  & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                               >> 0xfU)) 
                                     == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                                  >> 7U))))
                                  ? vlSelf->CPU__DOT__rf_wdata_wb
                                  : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU))])),32);
        bufp->chgIData(oldp+18,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
        bufp->chgIData(oldp+19,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                  & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                               >> 0x14U)) 
                                     == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                                  >> 7U))))
                                  ? vlSelf->CPU__DOT__rf_wdata_wb
                                  : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                 [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+20,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
        bufp->chgIData(oldp+21,(vlSelf->CPU__DOT__forward1_data),32);
        bufp->chgIData(oldp+22,(vlSelf->CPU__DOT__forward2_data),32);
        bufp->chgIData(oldp+23,(vlSelf->CPU__DOT__alu_rf_data1),32);
        bufp->chgIData(oldp+24,(vlSelf->CPU__DOT__alu_rf_data2),32);
        bufp->chgIData(oldp+25,(vlSelf->CPU__DOT__alu_rs1),32);
        bufp->chgIData(oldp+26,(vlSelf->CPU__DOT__alu_rs2),32);
        bufp->chgIData(oldp+27,(vlSelf->CPU__DOT__alu_result_ex),32);
        bufp->chgIData(oldp+28,(vlSelf->CPU__DOT__alu_result_ls),32);
        bufp->chgIData(oldp+29,(vlSelf->CPU__DOT__alu_result_wb),32);
        bufp->chgIData(oldp+30,(vlSelf->CPU__DOT__jump_target),32);
        bufp->chgIData(oldp+31,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                  ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                      ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                               ? (0xffffU 
                                                  & vlSelf->CPU__DOT__dcache_rdata_ls)
                                               : (0xffU 
                                                  & vlSelf->CPU__DOT__dcache_rdata_ls)))
                                  : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                      ? ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                          ? 0U : vlSelf->CPU__DOT__dcache_rdata_ls)
                                      : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->CPU__DOT__dcache_rdata_ls))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->CPU__DOT__dcache_rdata_ls)))))),32);
        bufp->chgIData(oldp+32,(vlSelf->CPU__DOT__mem_rdata_wb),32);
        bufp->chgIData(oldp+33,(vlSelf->CPU__DOT__dcache_rdata_ls),32);
        bufp->chgCData(oldp+34,(vlSelf->CPU__DOT__alu_op_id),5);
        bufp->chgCData(oldp+35,(vlSelf->CPU__DOT__alu_op_ex),5);
        bufp->chgCData(oldp+36,(vlSelf->CPU__DOT__mem_access_id),5);
        bufp->chgCData(oldp+37,(vlSelf->CPU__DOT__mem_access_ex),5);
        bufp->chgCData(oldp+38,(vlSelf->CPU__DOT__mem_access_ls),5);
        bufp->chgCData(oldp+39,(vlSelf->CPU__DOT__br_type_id),5);
        bufp->chgCData(oldp+40,(vlSelf->CPU__DOT__br_type_ex),5);
        bufp->chgCData(oldp+41,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
        bufp->chgCData(oldp+42,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
        bufp->chgCData(oldp+43,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
        bufp->chgCData(oldp+44,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
        bufp->chgBit(oldp+45,(vlSelf->CPU__DOT__wb_rf_sel_id));
        bufp->chgBit(oldp+46,(vlSelf->CPU__DOT__wb_rf_sel_ex));
        bufp->chgBit(oldp+47,(vlSelf->CPU__DOT__wb_rf_sel_ls));
        bufp->chgBit(oldp+48,(vlSelf->CPU__DOT__wb_rf_sel_wb));
        bufp->chgBit(oldp+49,(vlSelf->CPU__DOT__rf_we_id));
        bufp->chgBit(oldp+50,(vlSelf->CPU__DOT__rf_we_ex));
        bufp->chgBit(oldp+51,(vlSelf->CPU__DOT__rf_we_ls));
        bufp->chgBit(oldp+52,(vlSelf->CPU__DOT__rf_we_wb));
        bufp->chgBit(oldp+53,(vlSelf->CPU__DOT__forward1_en));
        bufp->chgBit(oldp+54,(vlSelf->CPU__DOT__forward2_en));
        bufp->chgBit(oldp+55,(vlSelf->CPU__DOT__jump));
        bufp->chgBit(oldp+56,(vlSelf->CPU__DOT__pc_set));
        bufp->chgBit(oldp+57,(vlSelf->CPU__DOT__pc_stall));
        bufp->chgBit(oldp+58,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
        bufp->chgBit(oldp+59,(vlSelf->CPU__DOT__IF2_ID_flush));
        bufp->chgBit(oldp+60,(vlSelf->CPU__DOT__ID_EX_flush));
        bufp->chgBit(oldp+61,(vlSelf->CPU__DOT__commit_if2));
        bufp->chgBit(oldp+62,(vlSelf->CPU__DOT__commit_id));
        bufp->chgBit(oldp+63,(vlSelf->CPU__DOT__commit_ex));
        bufp->chgBit(oldp+64,(vlSelf->CPU__DOT__commit_ls));
        bufp->chgCData(oldp+65,(vlSelf->CPU__DOT__csr_op_id),3);
        bufp->chgCData(oldp+66,(vlSelf->CPU__DOT__csr_op_ex),3);
        bufp->chgCData(oldp+67,(vlSelf->CPU__DOT__csr_op_ls),3);
        bufp->chgCData(oldp+68,(vlSelf->CPU__DOT__csr_op_wb),3);
        bufp->chgBit(oldp+69,(vlSelf->CPU__DOT__csr_we_id));
        bufp->chgBit(oldp+70,(vlSelf->CPU__DOT__csr_we_ex));
        bufp->chgBit(oldp+71,(vlSelf->CPU__DOT__csr_we_ls));
        bufp->chgBit(oldp+72,(vlSelf->CPU__DOT__csr_we_wb));
        bufp->chgSData(oldp+73,((vlSelf->CPU__DOT__inst_id 
                                 >> 0x14U)),12);
        bufp->chgSData(oldp+74,(vlSelf->CPU__DOT__csr_addr_ex),12);
        bufp->chgSData(oldp+75,(vlSelf->CPU__DOT__csr_addr_ls),12);
        bufp->chgSData(oldp+76,(vlSelf->CPU__DOT__csr_addr_wb),12);
        bufp->chgIData(oldp+77,(vlSelf->CPU__DOT__csr_data_ls),32);
        bufp->chgIData(oldp+78,(vlSelf->CPU__DOT__csr_data_wb),32);
        bufp->chgBit(oldp+79,(vlSelf->CPU__DOT__we));
        bufp->chgIData(oldp+80,(vlSelf->CPU__DOT__wdata_CSR),32);
        bufp->chgIData(oldp+81,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                          >> 0xfU))),32);
        bufp->chgIData(oldp+82,(vlSelf->CPU__DOT__wdata_CSR_sr),32);
        bufp->chgIData(oldp+83,((((IData)(vlSelf->CPU__DOT__we) 
                                  & ((vlSelf->CPU__DOT__inst_id 
                                      >> 0x14U) == (IData)(vlSelf->CPU__DOT__csr_addr_wb)))
                                  ? vlSelf->CPU__DOT__wdata_CSR
                                  : ((0x300U == (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))
                                      ? vlSelf->CPU__DOT__mstatus
                                      : ((0x305U == 
                                          (vlSelf->CPU__DOT__inst_id 
                                           >> 0x14U))
                                          ? vlSelf->CPU__DOT__mtvec
                                          : ((0x342U 
                                              == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                              ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                              : ((0x341U 
                                                  == 
                                                  (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U))
                                                  ? vlSelf->CPU__DOT__mepc
                                                  : 0U)))))),32);
        bufp->chgIData(oldp+84,(vlSelf->CPU__DOT__rdata_CSR_ex),32);
        bufp->chgIData(oldp+85,(vlSelf->CPU__DOT__mtvec),32);
        bufp->chgIData(oldp+86,(vlSelf->CPU__DOT__mstatus),32);
        bufp->chgIData(oldp+87,(vlSelf->CPU__DOT__mepc),32);
        bufp->chgIData(oldp+88,(vlSelf->CPU__DOT__mcause_wdata),32);
        bufp->chgBit(oldp+89,(vlSelf->CPU__DOT__mcause_we));
        bufp->chgBit(oldp+90,(vlSelf->CPU__DOT__mepc_we));
        bufp->chgBit(oldp+91,(vlSelf->CPU__DOT__mstatus_we));
        bufp->chgQData(oldp+92,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
        bufp->chgIData(oldp+94,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
        bufp->chgIData(oldp+95,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
        bufp->chgCData(oldp+96,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h1748fad1__0) 
                                  << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                            >> 0x1fU))),2);
        bufp->chgIData(oldp+97,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
        bufp->chgIData(oldp+98,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
        bufp->chgBit(oldp+99,((IData)((0x10U == (0x18U 
                                                 & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
        bufp->chgBit(oldp+100,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a52d44e__0) 
                                & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                   >> 2U))));
        bufp->chgBit(oldp+101,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
        bufp->chgBit(oldp+102,((0x30200073U == vlSelf->CPU__DOT__inst_wb)));
        bufp->chgIData(oldp+103,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
        bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                      >> 3U))));
        bufp->chgCData(oldp+105,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
        bufp->chgIData(oldp+106,(vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp),32);
        bufp->chgCData(oldp+107,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 7U))),5);
        bufp->chgCData(oldp+108,((7U & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                           >> 7U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                           >> 7U))),5);
        bufp->chgCData(oldp+111,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+112,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+113,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                           >> 7U))),5);
        bufp->chgCData(oldp+114,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+115,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+116,((0x73U == vlSelf->CPU__DOT__inst_wb)));
        bufp->chgBit(oldp+117,(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use));
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                      >> 3U))));
        bufp->chgBit(oldp+119,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_csr));
        bufp->chgIData(oldp+120,(vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp),32);
        bufp->chgIData(oldp+121,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
        bufp->chgIData(oldp+122,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
        bufp->chgIData(oldp+123,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
        bufp->chgIData(oldp+124,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
        bufp->chgIData(oldp+125,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
        bufp->chgIData(oldp+126,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
        bufp->chgIData(oldp+127,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
        bufp->chgIData(oldp+128,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
        bufp->chgIData(oldp+129,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
        bufp->chgIData(oldp+130,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
        bufp->chgIData(oldp+131,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
        bufp->chgIData(oldp+132,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
        bufp->chgIData(oldp+133,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
        bufp->chgIData(oldp+134,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
        bufp->chgIData(oldp+135,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
        bufp->chgIData(oldp+136,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
        bufp->chgIData(oldp+137,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
        bufp->chgIData(oldp+138,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
        bufp->chgIData(oldp+139,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
        bufp->chgIData(oldp+140,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
        bufp->chgIData(oldp+141,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
        bufp->chgIData(oldp+142,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
        bufp->chgIData(oldp+143,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
        bufp->chgIData(oldp+144,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
        bufp->chgIData(oldp+145,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
        bufp->chgIData(oldp+146,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
        bufp->chgIData(oldp+147,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
        bufp->chgIData(oldp+148,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
        bufp->chgIData(oldp+149,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
        bufp->chgIData(oldp+150,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
        bufp->chgIData(oldp+151,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
        bufp->chgIData(oldp+152,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+153,(vlSelf->clk));
    bufp->chgBit(oldp+154,(vlSelf->rstn));
    bufp->chgBit(oldp+155,(vlSelf->commit_wb));
    bufp->chgIData(oldp+156,(vlSelf->pc_cur),32);
    bufp->chgIData(oldp+157,(vlSelf->inst),32);
    bufp->chgBit(oldp+158,(vlSelf->uncache_read_wb));
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
