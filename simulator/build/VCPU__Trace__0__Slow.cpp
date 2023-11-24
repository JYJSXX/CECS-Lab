// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+669,"araddr", false,-1, 31,0);
    tracep->declBus(c+670,"arvalid", false,-1, 0,0);
    tracep->declBus(c+671,"arready", false,-1, 0,0);
    tracep->declBus(c+672,"arlen", false,-1, 7,0);
    tracep->declBus(c+673,"arsize", false,-1, 2,0);
    tracep->declBus(c+674,"arburst", false,-1, 1,0);
    tracep->declBus(c+675,"rdata", false,-1, 31,0);
    tracep->declBus(c+676,"rresp", false,-1, 1,0);
    tracep->declBus(c+677,"rvalid", false,-1, 0,0);
    tracep->declBus(c+678,"rready", false,-1, 0,0);
    tracep->declBus(c+679,"rlast", false,-1, 0,0);
    tracep->declBus(c+680,"awaddr", false,-1, 31,0);
    tracep->declBus(c+681,"awvalid", false,-1, 0,0);
    tracep->declBus(c+682,"awready", false,-1, 0,0);
    tracep->declBus(c+683,"awlen", false,-1, 7,0);
    tracep->declBus(c+684,"awsize", false,-1, 2,0);
    tracep->declBus(c+685,"awburst", false,-1, 1,0);
    tracep->declBus(c+686,"wdata", false,-1, 31,0);
    tracep->declBus(c+687,"wstrb", false,-1, 3,0);
    tracep->declBus(c+688,"wvalid", false,-1, 0,0);
    tracep->declBus(c+689,"wready", false,-1, 0,0);
    tracep->declBus(c+690,"wlast", false,-1, 0,0);
    tracep->declBus(c+691,"bresp", false,-1, 1,0);
    tracep->declBus(c+692,"bvalid", false,-1, 0,0);
    tracep->declBus(c+693,"bready", false,-1, 0,0);
    tracep->declBus(c+694,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+695,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+696,"inst", false,-1, 31,0);
    tracep->declBus(c+697,"pc_cur", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBus(c+698,"PC_RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+699,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+700,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+669,"araddr", false,-1, 31,0);
    tracep->declBus(c+670,"arvalid", false,-1, 0,0);
    tracep->declBus(c+671,"arready", false,-1, 0,0);
    tracep->declBus(c+672,"arlen", false,-1, 7,0);
    tracep->declBus(c+673,"arsize", false,-1, 2,0);
    tracep->declBus(c+674,"arburst", false,-1, 1,0);
    tracep->declBus(c+675,"rdata", false,-1, 31,0);
    tracep->declBus(c+676,"rresp", false,-1, 1,0);
    tracep->declBus(c+677,"rvalid", false,-1, 0,0);
    tracep->declBus(c+678,"rready", false,-1, 0,0);
    tracep->declBus(c+679,"rlast", false,-1, 0,0);
    tracep->declBus(c+680,"awaddr", false,-1, 31,0);
    tracep->declBus(c+681,"awvalid", false,-1, 0,0);
    tracep->declBus(c+682,"awready", false,-1, 0,0);
    tracep->declBus(c+683,"awlen", false,-1, 7,0);
    tracep->declBus(c+684,"awsize", false,-1, 2,0);
    tracep->declBus(c+685,"awburst", false,-1, 1,0);
    tracep->declBus(c+686,"wdata", false,-1, 31,0);
    tracep->declBus(c+687,"wstrb", false,-1, 3,0);
    tracep->declBus(c+688,"wvalid", false,-1, 0,0);
    tracep->declBus(c+689,"wready", false,-1, 0,0);
    tracep->declBus(c+690,"wlast", false,-1, 0,0);
    tracep->declBus(c+691,"bresp", false,-1, 1,0);
    tracep->declBus(c+692,"bvalid", false,-1, 0,0);
    tracep->declBus(c+693,"bready", false,-1, 0,0);
    tracep->declBus(c+694,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+695,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+696,"inst", false,-1, 31,0);
    tracep->declBus(c+697,"pc_cur", false,-1, 31,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+43,"rf_rdata1_id", false,-1, 31,0);
    tracep->declBus(c+44,"rf_rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+45,"rf_rdata2_id", false,-1, 31,0);
    tracep->declBus(c+46,"rf_rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+49,"alu_rf_data1", false,-1, 31,0);
    tracep->declBus(c+50,"alu_rf_data2", false,-1, 31,0);
    tracep->declBus(c+51,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+52,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+57,"mem_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+60,"dcache_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+680,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+686,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+701,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+683,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+683,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+66,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+67,"alu_op_ex", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+73,"priv_vec_id", false,-1, 4,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+77,"wstrb_ex", false,-1, 3,0);
    tracep->declBus(c+687,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+702,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+684,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+684,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+78,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+79,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+81,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+82,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+85,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+86,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+668,"ip_rvalid_if1", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+95,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+96,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+99,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+99,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+98,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+100,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+101,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+102,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+103,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+102,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+104,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+102,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+104,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+100,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+98,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+668,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->pushNamePrefix("ALU_inst ");
    tracep->declBus(c+51,"sr1", false,-1, 31,0);
    tracep->declBus(c+52,"sr2", false,-1, 31,0);
    tracep->declBus(c+67,"alu_op", false,-1, 4,0);
    tracep->declBus(c+53,"result", false,-1, 31,0);
    tracep->declQuad(c+110,"result_64", false,-1, 63,0);
    tracep->declBus(c+112,"result_div", false,-1, 31,0);
    tracep->declBus(c+113,"result_rem", false,-1, 31,0);
    tracep->declBus(c+114,"sign", false,-1, 1,0);
    tracep->declBus(c+115,"sr1_abs", false,-1, 31,0);
    tracep->declBus(c+116,"sr2_abs", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data1_mux ");
    tracep->declBus(c+703,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"din1", false,-1, 31,0);
    tracep->declBus(c+47,"din2", false,-1, 31,0);
    tracep->declBus(c+95,"sel", false,-1, 0,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data2_mux ");
    tracep->declBus(c+703,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"din1", false,-1, 31,0);
    tracep->declBus(c+48,"din2", false,-1, 31,0);
    tracep->declBus(c+96,"sel", false,-1, 0,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs1_mux ");
    tracep->declBus(c+703,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"din1", false,-1, 31,0);
    tracep->declBus(c+25,"din2", false,-1, 31,0);
    tracep->declBus(c+704,"din3", false,-1, 31,0);
    tracep->declBus(c+704,"din4", false,-1, 31,0);
    tracep->declBus(c+79,"sel", false,-1, 1,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs2_mux ");
    tracep->declBus(c+703,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"din1", false,-1, 31,0);
    tracep->declBus(c+36,"din2", false,-1, 31,0);
    tracep->declBus(c+699,"din3", false,-1, 31,0);
    tracep->declBus(c+39,"din4", false,-1, 31,0);
    tracep->declBus(c+81,"sel", false,-1, 1,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_inst ");
    tracep->declBus(c+72,"br_type", false,-1, 4,0);
    tracep->declBus(c+49,"sr1", false,-1, 31,0);
    tracep->declBus(c+50,"sr2", false,-1, 31,0);
    tracep->declBus(c+25,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBit(c+117,"is_branch", false,-1);
    tracep->declBit(c+118,"is_jal", false,-1);
    tracep->declBit(c+119,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR_inst ");
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+120,"raddr", false,-1, 11,0);
    tracep->declBus(c+121,"waddr", false,-1, 11,0);
    tracep->declBus(c+122,"we", false,-1, 0,0);
    tracep->declBus(c+42,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"rdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBit(c+104,"has_exp", false,-1);
    tracep->declBus(c+123,"mstatus", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec", false,-1, 31,0);
    tracep->declBus(c+124,"mcause", false,-1, 31,0);
    tracep->declBus(c+63,"mepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Read_Ctrl_inst ");
    tracep->declBus(c+60,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access", false,-1, 4,0);
    tracep->declBus(c+58,"rdata", false,-1, 31,0);
    tracep->declBus(c+125,"load_type", false,-1, 2,0);
    tracep->declBus(c+126,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Write_Ctrl_inst ");
    tracep->declBus(c+50,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access", false,-1, 4,0);
    tracep->declBus(c+77,"wstrb", false,-1, 3,0);
    tracep->declBus(c+57,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+127,"is_store", false,-1);
    tracep->declBus(c+128,"store_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_inst ");
    tracep->declBus(c+699,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+700,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+53,"addr", false,-1, 31,0);
    tracep->declBus(c+129,"rvalid", false,-1, 0,0);
    tracep->declBus(c+60,"rdata", false,-1, 31,0);
    tracep->declBus(c+128,"rsize", false,-1, 2,0);
    tracep->declBus(c+127,"wvalid", false,-1, 0,0);
    tracep->declBus(c+57,"wdata", false,-1, 31,0);
    tracep->declBus(c+77,"wstrb", false,-1, 3,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+130,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+131,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+684,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+683,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+680,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+686,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+687,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+684,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+683,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+699,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+706,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+699,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+706,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+707,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+132,"req_buf_we", false,-1, 0,0);
    tracep->declBus(c+133,"wdata_pipe", false,-1, 31,0);
    tracep->declBus(c+134,"addr_pipe", false,-1, 31,0);
    tracep->declBus(c+135,"wstrb_pipe", false,-1, 3,0);
    tracep->declBus(c+136,"rsize_pipe", false,-1, 2,0);
    tracep->declBus(c+137,"fence_valid_pipe", false,-1, 0,0);
    tracep->declBus(c+138,"valid_flush", false,-1, 0,0);
    tracep->declBus(c+139,"we_pipe", false,-1, 0,0);
    tracep->declBus(c+140,"rvalid_pipe", false,-1, 0,0);
    tracep->declBus(c+141,"wvalid_pipe", false,-1, 0,0);
    tracep->declBus(c+142,"uncache", false,-1, 0,0);
    tracep->declArray(c+143,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+147,"r_index", false,-1, 3,0);
    tracep->declBus(c+148,"w_index", false,-1, 3,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+149+i*1,"mem_we", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+151+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declArray(c+159,"mem_wdata", false,-1, 127,0);
    tracep->declBus(c+163,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+164,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+165+i*1,"tag_rdata", true,(i+0), 23,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+167+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+169+i*1,"valid_bit_rdata", true,(i+0), 0,0);
    }
    tracep->declBus(c+171,"hit", false,-1, 1,0);
    tracep->declBit(c+172,"cache_hit", false,-1);
    tracep->declBus(c+164,"tag", false,-1, 23,0);
    tracep->declBit(c+173,"hit_way", false,-1);
    tracep->declArray(c+174,"wdata_pipe_512", false,-1, 127,0);
    tracep->declArray(c+178,"wstrb_pipe_512", false,-1, 127,0);
    tracep->declBit(c+182,"wdata_from_pipe", false,-1);
    tracep->declBit(c+183,"data_from_mem", false,-1);
    tracep->declBit(c+184,"lru_sel", false,-1);
    tracep->declBit(c+185,"lru_hit_update", false,-1);
    tracep->declBit(c+186,"lru_refill_update", false,-1);
    tracep->declBus(c+187,"lru", false,-1, 15,0);
    tracep->declBit(c+188,"dirty_info", false,-1);
    tracep->declBit(c+189,"dirty_refill", false,-1);
    tracep->declBit(c+190,"dirty_we", false,-1);
    tracep->declBit(c+191,"dirty_clean_all", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+192+i*1,"dirty_table", true,(i+0), 15,0);
    }
    tracep->declArray(c+194,"wbuf", false,-1, 127,0);
    tracep->declBit(c+198,"wbuf_we", false,-1);
    tracep->declBus(c+199,"maddr_buf", false,-1, 31,0);
    tracep->declBit(c+200,"mbuf_we", false,-1);
    tracep->declBit(c+201,"wfsm_en", false,-1);
    tracep->declBit(c+202,"wfsm_reset", false,-1);
    tracep->declBit(c+203,"wrt_finish", false,-1);
    tracep->declBus(c+204,"write_counter", false,-1, 2,0);
    tracep->declBit(c+205,"write_counter_reset", false,-1);
    tracep->declBit(c+16,"write_counter_en", false,-1);
    tracep->declBus(c+206,"addr_cnt", false,-1, 4,0);
    tracep->declBit(c+207,"addr_cnt_add", false,-1);
    tracep->declBit(c+208,"read_from_cnt", false,-1);
    tracep->declArray(c+209,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+213,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+217,"state", false,-1, 1,0);
    tracep->declBus(c+17,"next_state", false,-1, 1,0);
    tracep->declBus(c+218,"wfsm_state", false,-1, 1,0);
    tracep->declBus(c+18,"wfsm_next_state", false,-1, 1,0);
    tracep->declBus(c+219,"write_num", false,-1, 2,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+147,"raddr", false,-1, 3,0);
    tracep->declBus(c+148,"waddr", false,-1, 3,0);
    tracep->declArray(c+159,"din", false,-1, 127,0);
    tracep->declBus(c+220,"we", false,-1, 15,0);
    tracep->declArray(c+221,"dout", false,-1, 127,0);
    tracep->declBus(c+225,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+226+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+147,"raddr", false,-1, 3,0);
    tracep->declBus(c+148,"waddr", false,-1, 3,0);
    tracep->declArray(c+159,"din", false,-1, 127,0);
    tracep->declBus(c+290,"we", false,-1, 15,0);
    tracep->declArray(c+291,"dout", false,-1, 127,0);
    tracep->declBus(c+295,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+296+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+147,"raddr", false,-1, 3,0);
    tracep->declBus(c+148,"waddr", false,-1, 3,0);
    tracep->declBus(c+164,"din", false,-1, 23,0);
    tracep->declBit(c+360,"we", false,-1);
    tracep->declBus(c+361,"dout", false,-1, 23,0);
    tracep->declBus(c+362,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+363+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+147,"raddr", false,-1, 3,0);
    tracep->declBus(c+148,"waddr", false,-1, 3,0);
    tracep->declBus(c+164,"din", false,-1, 23,0);
    tracep->declBit(c+379,"we", false,-1);
    tracep->declBus(c+380,"dout", false,-1, 23,0);
    tracep->declBus(c+381,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+382+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Decode_inst ");
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+66,"alu_op", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access", false,-1, 4,0);
    tracep->declBus(c+35,"imm", false,-1, 31,0);
    tracep->declBus(c+86,"rf_we", false,-1, 0,0);
    tracep->declBus(c+78,"alu_rs1_sel", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel", false,-1, 1,0);
    tracep->declBus(c+82,"wb_rf_sel", false,-1, 0,0);
    tracep->declBus(c+71,"br_type", false,-1, 4,0);
    tracep->declBus(c+73,"priv_vec", false,-1, 4,0);
    tracep->declBus(c+398,"rd", false,-1, 4,0);
    tracep->declBus(c+399,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Exp_Commit_inst ");
    tracep->declBus(c+76,"priv_vec", false,-1, 4,0);
    tracep->declBus(c+65,"exp_code", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Hazard_inst ");
    tracep->declBus(c+400,"rf_rd_ls", false,-1, 4,0);
    tracep->declBus(c+401,"rf_rd_wb", false,-1, 4,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+402,"rf_rs1_ex", false,-1, 4,0);
    tracep->declBus(c+403,"rf_rs2_ex", false,-1, 4,0);
    tracep->declBus(c+54,"rf_wdata_tmp_ls", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+95,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+96,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+404,"rf_rd_ex", false,-1, 4,0);
    tracep->declBus(c+405,"rf_rs1_id", false,-1, 4,0);
    tracep->declBus(c+406,"rf_rs2_id", false,-1, 4,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+98,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+101,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+103,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+104,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+104,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+98,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+99,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+99,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+100,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+102,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+102,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+102,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+100,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+33,"pc_set_target", false,-1, 31,0);
    tracep->declBit(c+407,"stall_by_load_use", false,-1);
    tracep->declBit(c+408,"flush_by_load_use", false,-1);
    tracep->declBit(c+129,"is_load_ex", false,-1);
    tracep->declBit(c+105,"stall_by_icache", false,-1);
    tracep->declBit(c+105,"flush_by_icache", false,-1);
    tracep->declBit(c+102,"stall_by_dcache", false,-1);
    tracep->declBit(c+97,"flush_by_jump", false,-1);
    tracep->declBit(c+409,"flush_by_priv_ex", false,-1);
    tracep->declBit(c+104,"flush_by_exp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICache_inst ");
    tracep->declBus(c+699,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+700,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+668,"rvalid", false,-1, 0,0);
    tracep->declBus(c+22,"raddr", false,-1, 31,0);
    tracep->declBus(c+28,"rdata", false,-1, 31,0);
    tracep->declBus(c+130,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+131,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+98,"flush", false,-1, 0,0);
    tracep->declBus(c+100,"stall", false,-1, 0,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+702,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+701,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+699,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+706,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+699,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+706,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+707,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+410,"addr_pipe", false,-1, 31,0);
    tracep->declBit(c+411,"rvalid_pipe", false,-1);
    tracep->declBit(c+412,"req_buf_we", false,-1);
    tracep->declArray(c+413,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+417,"r_index", false,-1, 3,0);
    tracep->declBus(c+418,"w_index", false,-1, 3,0);
    tracep->declBus(c+419,"mem_we", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+420+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declBus(c+428,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+429,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+430+i*1,"tag_rdata", true,(i+0), 24,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+432+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    tracep->declBus(c+434,"hit", false,-1, 1,0);
    tracep->declBit(c+435,"hit_way", false,-1);
    tracep->declBit(c+436,"cache_hit", false,-1);
    tracep->declBus(c+429,"tag", false,-1, 23,0);
    tracep->declBit(c+437,"lru_sel", false,-1);
    tracep->declBit(c+438,"lru_hit_update", false,-1);
    tracep->declBit(c+439,"lru_refill_update", false,-1);
    tracep->declBit(c+440,"data_from_mem", false,-1);
    tracep->declBit(c+441,"flush_buf", false,-1);
    tracep->declArray(c+442,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+446,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+450,"lru", false,-1, 15,0);
    tracep->declBus(c+451,"state", false,-1, 1,0);
    tracep->declBus(c+19,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+417,"raddr", false,-1, 3,0);
    tracep->declBus(c+418,"waddr", false,-1, 3,0);
    tracep->declArray(c+413,"din", false,-1, 127,0);
    tracep->declBit(c+452,"we", false,-1);
    tracep->declArray(c+453,"dout", false,-1, 127,0);
    tracep->declBus(c+457,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+458+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+417,"raddr", false,-1, 3,0);
    tracep->declBus(c+418,"waddr", false,-1, 3,0);
    tracep->declArray(c+413,"din", false,-1, 127,0);
    tracep->declBit(c+522,"we", false,-1);
    tracep->declArray(c+523,"dout", false,-1, 127,0);
    tracep->declBus(c+527,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+528+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+417,"raddr", false,-1, 3,0);
    tracep->declBus(c+418,"waddr", false,-1, 3,0);
    tracep->declBus(c+429,"din", false,-1, 23,0);
    tracep->declBit(c+592,"we", false,-1);
    tracep->declBus(c+593,"dout", false,-1, 23,0);
    tracep->declBus(c+594,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+595+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+7,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+699,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+667,"clk", false,-1);
    tracep->declBus(c+417,"raddr", false,-1, 3,0);
    tracep->declBus(c+418,"waddr", false,-1, 3,0);
    tracep->declBus(c+429,"din", false,-1, 23,0);
    tracep->declBit(c+611,"we", false,-1);
    tracep->declBus(c+612,"dout", false,-1, 23,0);
    tracep->declBus(c+613,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+614+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("NPC_Mux_inst ");
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+698,"RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+99,"stall", false,-1, 0,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Priv_inst ");
    tracep->declBus(c+630,"csr_op", false,-1, 2,0);
    tracep->declBus(c+39,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+631,"zimm", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+708,"CSRRW", false,-1, 2,0);
    tracep->declBus(c+702,"CSRRS", false,-1, 2,0);
    tracep->declBus(c+709,"CSRRC", false,-1, 2,0);
    tracep->declBus(c+710,"CSRRWI", false,-1, 2,0);
    tracep->declBus(c+711,"CSRRSI", false,-1, 2,0);
    tracep->declBus(c+712,"CSRRCI", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile_inst ");
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+405,"raddr1", false,-1, 4,0);
    tracep->declBus(c+406,"raddr2", false,-1, 4,0);
    tracep->declBus(c+401,"waddr", false,-1, 4,0);
    tracep->declBus(c+37,"wdata", false,-1, 31,0);
    tracep->declBit(c+89,"we", false,-1);
    tracep->declBus(c+43,"rdata1", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+632+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SegReg_EX_LS_inst ");
    tracep->declBus(c+698,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+104,"flush", false,-1, 0,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_ID_EX_inst ");
    tracep->declBus(c+698,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+103,"flush", false,-1, 0,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+43,"rdata1_id", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2_id", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+66,"op_id", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+82,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+78,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+86,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+73,"priv_vec_id", false,-1, 4,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+44,"rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+46,"rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+67,"op_ex", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+79,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+81,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF1_IF2_inst ");
    tracep->declBus(c+698,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+99,"stall", false,-1, 0,0);
    tracep->declBus(c+98,"flush", false,-1, 0,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+668,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF2_ID_inst ");
    tracep->declBus(c+698,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+100,"stall", false,-1, 0,0);
    tracep->declBus(c+101,"flush", false,-1, 0,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_LS_WB_inst ");
    tracep->declBus(c+698,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+104,"flush", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+85,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+664,"read_ls", false,-1, 0,0);
    tracep->declBus(c+695,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->declBus(c+694,"commit_wb", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_rf_wdata_mux ");
    tracep->declBus(c+703,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"din1", false,-1, 31,0);
    tracep->declBus(c+59,"din2", false,-1, 31,0);
    tracep->declBus(c+85,"sel", false,-1, 0,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arbiter_inst ");
    tracep->declBus(c+667,"clk", false,-1, 0,0);
    tracep->declBus(c+668,"rstn", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+702,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+701,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+675,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+684,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+683,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+680,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+686,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+687,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+684,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+683,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+669,"araddr", false,-1, 31,0);
    tracep->declBus(c+670,"arvalid", false,-1, 0,0);
    tracep->declBus(c+671,"arready", false,-1, 0,0);
    tracep->declBus(c+672,"arlen", false,-1, 7,0);
    tracep->declBus(c+673,"arsize", false,-1, 2,0);
    tracep->declBus(c+674,"arburst", false,-1, 1,0);
    tracep->declBus(c+675,"rdata", false,-1, 31,0);
    tracep->declBus(c+676,"rresp", false,-1, 1,0);
    tracep->declBus(c+677,"rvalid", false,-1, 0,0);
    tracep->declBus(c+678,"rready", false,-1, 0,0);
    tracep->declBus(c+679,"rlast", false,-1, 0,0);
    tracep->declBus(c+680,"awaddr", false,-1, 31,0);
    tracep->declBus(c+681,"awvalid", false,-1, 0,0);
    tracep->declBus(c+682,"awready", false,-1, 0,0);
    tracep->declBus(c+683,"awlen", false,-1, 7,0);
    tracep->declBus(c+684,"awsize", false,-1, 2,0);
    tracep->declBus(c+685,"awburst", false,-1, 1,0);
    tracep->declBus(c+686,"wdata", false,-1, 31,0);
    tracep->declBus(c+687,"wstrb", false,-1, 3,0);
    tracep->declBus(c+688,"wvalid", false,-1, 0,0);
    tracep->declBus(c+689,"wready", false,-1, 0,0);
    tracep->declBus(c+690,"wlast", false,-1, 0,0);
    tracep->declBus(c+691,"bresp", false,-1, 1,0);
    tracep->declBus(c+692,"bvalid", false,-1, 0,0);
    tracep->declBus(c+693,"bready", false,-1, 0,0);
    tracep->declBus(c+665,"r_crt", false,-1, 2,0);
    tracep->declBus(c+20,"r_nxt", false,-1, 2,0);
    tracep->declBus(c+666,"w_crt", false,-1, 1,0);
    tracep->declBus(c+21,"w_nxt", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+10,(vlSelf->CPU__DOT__i_rready));
    bufp->fullBit(oldp+11,(vlSelf->CPU__DOT__i_rlast));
    bufp->fullBit(oldp+12,(vlSelf->CPU__DOT__d_rready));
    bufp->fullBit(oldp+13,(vlSelf->CPU__DOT__d_rlast));
    bufp->fullBit(oldp+14,(vlSelf->CPU__DOT__d_wready));
    bufp->fullBit(oldp+15,(vlSelf->CPU__DOT__d_bvalid));
    bufp->fullBit(oldp+16,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en));
    bufp->fullCData(oldp+17,(vlSelf->CPU__DOT__DCache_inst__DOT__next_state),2);
    bufp->fullCData(oldp+18,(((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                               ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en)
                                   ? (((0xaU == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                 >> 0x1cU)) 
                                       & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe))
                                       ? 2U : (((0xaU 
                                                 == 
                                                 (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                  >> 0x1cU)) 
                                                & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                                       [
                                                       (1U 
                                                        & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                            ? 
                                                           ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                                            >> 4U)
                                                            : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                                       >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))
                                                    ? 1U
                                                    : 2U)))
                                   : 0U) : ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                             ? ((IData)(vlSelf->CPU__DOT__d_bvalid)
                                                 ? 2U
                                                 : 1U)
                                             : ((2U 
                                                 == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))
                                                 ? 
                                                ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset)
                                                  ? 0U
                                                  : 2U)
                                                 : 0U)))),2);
    bufp->fullCData(oldp+19,(vlSelf->CPU__DOT__ICache_inst__DOT__next_state),2);
    bufp->fullCData(oldp+20,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt),3);
    bufp->fullCData(oldp+21,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt),2);
    bufp->fullIData(oldp+22,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU__DOT__pc_if2),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__pc_id),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__pc_ex),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__pc_ls),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__pc_wb),32);
    __Vtemp_1[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][0U];
    __Vtemp_1[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][1U];
    __Vtemp_1[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][2U];
    __Vtemp_1[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_2, __Vtemp_1, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_3, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullIData(oldp+28,((((IData)(vlSelf->CPU__DOT__pc_set) 
                               | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf))
                               ? 0x13U : ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem)
                                           ? __Vtemp_2[0U]
                                           : __Vtemp_3[0U]))),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__inst_id),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__inst_ex),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__inst_ls),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU__DOT__inst_wb),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__pc_target),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->CPU__DOT__pc_set)
                               ? vlSelf->CPU__DOT__pc_target
                               : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU__DOT__imm_id),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU__DOT__imm_ex),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+38,(((0x300U == (vlSelf->CPU__DOT__inst_id 
                                          >> 0x14U))
                               ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                               : ((0x305U == (vlSelf->CPU__DOT__inst_id 
                                              >> 0x14U))
                                   ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                   : ((0x342U == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                       ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                       : ((0x341U == 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))
                                           ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                           : 0U))))),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU__DOT__csr_rdata_ex),32);
    bufp->fullIData(oldp+40,(((0x4000U & vlSelf->CPU__DOT__inst_ex)
                               ? ((0x2000U & vlSelf->CPU__DOT__inst_ex)
                                   ? ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (vlSelf->CPU__DOT__csr_rdata_ex 
                                          & (~ (0x1fU 
                                                & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))))
                                       : (vlSelf->CPU__DOT__csr_rdata_ex 
                                          | (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_ex 
                                                >> 0xfU))))
                                   : ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))
                                       : 0U)) : ((0x2000U 
                                                  & vlSelf->CPU__DOT__inst_ex)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | vlSelf->CPU__DOT__alu_rf_data1))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? vlSelf->CPU__DOT__alu_rf_data1
                                                   : 0U)))),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU__DOT__csr_wdata_ls),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU__DOT__csr_wdata_wb),32);
    bufp->fullIData(oldp+43,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
    bufp->fullIData(oldp+45,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU__DOT__forward1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU__DOT__forward2_data),32);
    bufp->fullIData(oldp+49,(vlSelf->CPU__DOT__alu_rf_data1),32);
    bufp->fullIData(oldp+50,(vlSelf->CPU__DOT__alu_rf_data2),32);
    bufp->fullIData(oldp+51,(vlSelf->CPU__DOT__alu_rs1),32);
    bufp->fullIData(oldp+52,(vlSelf->CPU__DOT__alu_rs2),32);
    bufp->fullIData(oldp+53,(vlSelf->CPU__DOT__alu_result_ex),32);
    bufp->fullIData(oldp+54,(vlSelf->CPU__DOT__alu_result_ls),32);
    bufp->fullIData(oldp+55,(vlSelf->CPU__DOT__alu_result_wb),32);
    bufp->fullIData(oldp+56,(vlSelf->CPU__DOT__jump_target),32);
    bufp->fullIData(oldp+57,(((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                               ? ((0U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                   ? (vlSelf->CPU__DOT__alu_rf_data2 
                                      << (0x18U & (vlSelf->CPU__DOT__alu_result_ex 
                                                   << 3U)))
                                   : ((1U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                       ? (vlSelf->CPU__DOT__alu_rf_data2 
                                          << (0x18U 
                                              & (vlSelf->CPU__DOT__alu_result_ex 
                                                 << 3U)))
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                           ? vlSelf->CPU__DOT__alu_rf_data2
                                           : 0U))) : 0U)),32);
    bufp->fullIData(oldp+58,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                               ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                            ? (0xffffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                            : (0xffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))
                               : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? 0U : vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                   : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))))),32);
    bufp->fullIData(oldp+59,(vlSelf->CPU__DOT__mem_rdata_wb),32);
    __Vtemp_4[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][0U];
    __Vtemp_4[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][1U];
    __Vtemp_4[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][2U];
    __Vtemp_4[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_5, __Vtemp_4, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_6, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 0x60U);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_7, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullIData(oldp+60,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem)
                               ? __Vtemp_5[0U] : ((0xaU 
                                                   == 
                                                   (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                    >> 0x1cU))
                                                   ? 
                                                  __Vtemp_6[0U]
                                                   : 
                                                  __Vtemp_7[0U]))),32);
    bufp->fullIData(oldp+61,((0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe)),32);
    bufp->fullIData(oldp+62,(((0xaU == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                        >> 0x1cU)) ? vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe
                               : (0xfffffff0U & vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe))),32);
    bufp->fullIData(oldp+63,(vlSelf->CPU__DOT__CSR_inst__DOT__mepc),32);
    bufp->fullIData(oldp+64,(vlSelf->CPU__DOT__CSR_inst__DOT__mtvec),32);
    bufp->fullIData(oldp+65,(vlSelf->CPU__DOT__mcause_global),32);
    bufp->fullCData(oldp+66,(vlSelf->CPU__DOT__alu_op_id),5);
    bufp->fullCData(oldp+67,(vlSelf->CPU__DOT__alu_op_ex),5);
    bufp->fullCData(oldp+68,(vlSelf->CPU__DOT__mem_access_id),5);
    bufp->fullCData(oldp+69,(vlSelf->CPU__DOT__mem_access_ex),5);
    bufp->fullCData(oldp+70,(vlSelf->CPU__DOT__mem_access_ls),5);
    bufp->fullCData(oldp+71,(vlSelf->CPU__DOT__br_type_id),5);
    bufp->fullCData(oldp+72,(vlSelf->CPU__DOT__br_type_ex),5);
    bufp->fullCData(oldp+73,((((IData)((0xfU == (0x707fU 
                                                 & vlSelf->CPU__DOT__inst_id))) 
                               << 4U) | (((IData)((0x100fU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPU__DOT__inst_id))) 
                                          << 3U) | 
                                         ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf46db2e__0) 
                                            & (0x302U 
                                               == (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf46db2e__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))) 
                                            << 1U) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->CPU__DOT__inst_id)) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 0xcU))))))))),5);
    bufp->fullCData(oldp+74,(vlSelf->CPU__DOT__priv_vec_ex),5);
    bufp->fullCData(oldp+75,(vlSelf->CPU__DOT__priv_vec_ls),5);
    bufp->fullCData(oldp+76,(vlSelf->CPU__DOT__priv_vec_wb),5);
    bufp->fullCData(oldp+77,(vlSelf->CPU__DOT__wstrb_ex),4);
    bufp->fullCData(oldp+78,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
    bufp->fullCData(oldp+79,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
    bufp->fullCData(oldp+80,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
    bufp->fullCData(oldp+81,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
    bufp->fullBit(oldp+82,(vlSelf->CPU__DOT__wb_rf_sel_id));
    bufp->fullBit(oldp+83,(vlSelf->CPU__DOT__wb_rf_sel_ex));
    bufp->fullBit(oldp+84,(vlSelf->CPU__DOT__wb_rf_sel_ls));
    bufp->fullBit(oldp+85,(vlSelf->CPU__DOT__wb_rf_sel_wb));
    bufp->fullBit(oldp+86,(vlSelf->CPU__DOT__rf_we_id));
    bufp->fullBit(oldp+87,(vlSelf->CPU__DOT__rf_we_ex));
    bufp->fullBit(oldp+88,(vlSelf->CPU__DOT__rf_we_ls));
    bufp->fullBit(oldp+89,(vlSelf->CPU__DOT__rf_we_wb));
    bufp->fullBit(oldp+90,(vlSelf->CPU__DOT__i_rvalid));
    bufp->fullBit(oldp+91,(vlSelf->CPU__DOT__d_rvalid));
    bufp->fullBit(oldp+92,(vlSelf->CPU__DOT__d_wvalid));
    bufp->fullBit(oldp+93,(vlSelf->CPU__DOT__d_wlast));
    bufp->fullBit(oldp+94,(vlSelf->CPU__DOT__d_bready));
    bufp->fullBit(oldp+95,(vlSelf->CPU__DOT__forward1_en));
    bufp->fullBit(oldp+96,(vlSelf->CPU__DOT__forward2_en));
    bufp->fullBit(oldp+97,(vlSelf->CPU__DOT__jump));
    bufp->fullBit(oldp+98,(vlSelf->CPU__DOT__pc_set));
    bufp->fullBit(oldp+99,(vlSelf->CPU__DOT__pc_stall));
    bufp->fullBit(oldp+100,(vlSelf->CPU__DOT__IF2_ID_stall));
    bufp->fullBit(oldp+101,(vlSelf->CPU__DOT__IF2_ID_flush));
    bufp->fullBit(oldp+102,(vlSelf->CPU__DOT__dcache_miss));
    bufp->fullBit(oldp+103,(vlSelf->CPU__DOT__ID_EX_flush));
    bufp->fullBit(oldp+104,((0U != vlSelf->CPU__DOT__mcause_global)));
    bufp->fullBit(oldp+105,(vlSelf->CPU__DOT__icache_miss));
    bufp->fullBit(oldp+106,(vlSelf->CPU__DOT__commit_if2));
    bufp->fullBit(oldp+107,(vlSelf->CPU__DOT__commit_id));
    bufp->fullBit(oldp+108,(vlSelf->CPU__DOT__commit_ex));
    bufp->fullBit(oldp+109,(vlSelf->CPU__DOT__commit_ls));
    bufp->fullQData(oldp+110,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
    bufp->fullIData(oldp+112,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
    bufp->fullIData(oldp+113,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h1748fad1__0) 
                                << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                          >> 0x1fU))),2);
    bufp->fullIData(oldp+115,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
    bufp->fullIData(oldp+116,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
    bufp->fullBit(oldp+117,((IData)((0x10U == (0x18U 
                                               & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a52d44e__0) 
                             & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                >> 2U))));
    bufp->fullBit(oldp+119,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
    bufp->fullSData(oldp+120,((vlSelf->CPU__DOT__inst_id 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+121,((vlSelf->CPU__DOT__inst_wb 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+122,((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))));
    bufp->fullIData(oldp+123,(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus),32);
    bufp->fullIData(oldp+124,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
    bufp->fullCData(oldp+125,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
    bufp->fullIData(oldp+126,(vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data),32);
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 4U))));
    bufp->fullCData(oldp+128,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ex))),3);
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 4U))));
    bufp->fullBit(oldp+132,(vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we));
    bufp->fullIData(oldp+133,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe),32);
    bufp->fullIData(oldp+134,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe),32);
    bufp->fullCData(oldp+135,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe),4);
    bufp->fullCData(oldp+136,(vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe),3);
    bufp->fullBit(oldp+137,(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe));
    bufp->fullBit(oldp+138,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush));
    bufp->fullBit(oldp+139,(vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe));
    bufp->fullBit(oldp+140,(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+141,(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe));
    bufp->fullBit(oldp+142,((0xaU == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                      >> 0x1cU))));
    bufp->fullWData(oldp+143,(vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+147,(vlSelf->CPU__DOT__DCache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+148,(vlSelf->CPU__DOT__DCache_inst__DOT__w_index),4);
    bufp->fullSData(oldp+149,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0]),16);
    bufp->fullSData(oldp+150,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1]),16);
    bufp->fullWData(oldp+151,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+155,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1]),128);
    bufp->fullWData(oldp+159,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata),128);
    bufp->fullCData(oldp+163,(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+164,((vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+165,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0]),24);
    bufp->fullIData(oldp+166,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1]),24);
    bufp->fullSData(oldp+167,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+168,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullBit(oldp+169,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[0]));
    bufp->fullBit(oldp+170,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[1]));
    bufp->fullCData(oldp+171,(vlSelf->CPU__DOT__DCache_inst__DOT__hit),2);
    bufp->fullBit(oldp+172,((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))));
    bufp->fullBit(oldp+173,((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))));
    bufp->fullWData(oldp+174,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512),128);
    bufp->fullWData(oldp+178,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512),128);
    bufp->fullBit(oldp+182,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe));
    bufp->fullBit(oldp+183,(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+184,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel));
    bufp->fullBit(oldp+185,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+186,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update));
    bufp->fullSData(oldp+187,(vlSelf->CPU__DOT__DCache_inst__DOT__lru),16);
    bufp->fullBit(oldp+188,((1U & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                   [(1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                            ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                               >> 4U)
                                            : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                   >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))));
    bufp->fullBit(oldp+189,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill));
    bufp->fullBit(oldp+190,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we));
    bufp->fullBit(oldp+191,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all));
    bufp->fullSData(oldp+192,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[0]),16);
    bufp->fullSData(oldp+193,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[1]),16);
    bufp->fullWData(oldp+194,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf),128);
    bufp->fullBit(oldp+198,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we));
    bufp->fullIData(oldp+199,(vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf),32);
    bufp->fullBit(oldp+200,(vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we));
    bufp->fullBit(oldp+201,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en));
    bufp->fullBit(oldp+202,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset));
    bufp->fullBit(oldp+203,(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
    bufp->fullCData(oldp+204,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter),3);
    bufp->fullBit(oldp+205,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset));
    bufp->fullCData(oldp+206,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt),5);
    bufp->fullBit(oldp+207,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add));
    bufp->fullBit(oldp+208,(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt));
    __Vtemp_10[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][0U];
    __Vtemp_10[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][1U];
    __Vtemp_10[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][2U];
    __Vtemp_10[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6ca36fb__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_11, __Vtemp_10, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+209,(__Vtemp_11),128);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_12, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 0x60U);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_13, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    if ((0xaU == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                  >> 0x1cU))) {
        __Vtemp_15[0U] = __Vtemp_12[0U];
        __Vtemp_15[1U] = __Vtemp_12[1U];
        __Vtemp_15[2U] = __Vtemp_12[2U];
        __Vtemp_15[3U] = __Vtemp_12[3U];
    } else {
        __Vtemp_15[0U] = __Vtemp_13[0U];
        __Vtemp_15[1U] = __Vtemp_13[1U];
        __Vtemp_15[2U] = __Vtemp_13[2U];
        __Vtemp_15[3U] = __Vtemp_13[3U];
    }
    bufp->fullWData(oldp+213,(__Vtemp_15),128);
    bufp->fullCData(oldp+217,(vlSelf->CPU__DOT__DCache_inst__DOT__state),2);
    bufp->fullCData(oldp+218,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state),2);
    bufp->fullCData(oldp+219,(((0xaU == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                         >> 0x1cU))
                                ? 0U : 3U)),3);
    bufp->fullSData(oldp+220,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [0U]),16);
    __Vtemp_16[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_16[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_16[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_16[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+221,(__Vtemp_16),128);
    bufp->fullCData(oldp+225,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+226,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+230,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+234,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+238,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+242,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+246,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+250,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+254,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+258,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+262,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+266,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+270,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+274,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+278,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+282,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+286,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullSData(oldp+290,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [1U]),16);
    __Vtemp_17[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_17[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_17[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_17[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+291,(__Vtemp_17),128);
    bufp->fullCData(oldp+295,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+296,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+300,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+304,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+308,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+312,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+316,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+320,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+324,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+328,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+332,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+336,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+340,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+344,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+348,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+352,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+356,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+360,((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+361,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+362,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+363,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+364,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+365,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+366,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+367,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+368,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+369,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+370,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+371,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+372,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+373,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+374,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+375,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+376,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+377,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+378,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+379,((1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+380,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+381,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+382,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+383,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+384,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+385,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+386,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+387,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+388,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+389,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+390,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+391,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+392,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+393,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+394,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+395,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+396,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+397,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullCData(oldp+398,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 7U))),5);
    bufp->fullCData(oldp+399,((7U & (vlSelf->CPU__DOT__inst_id 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+400,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                        >> 7U))),5);
    bufp->fullCData(oldp+401,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                        >> 7U))),5);
    bufp->fullCData(oldp+402,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+403,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+404,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 7U))),5);
    bufp->fullCData(oldp+405,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+406,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+407,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
    bufp->fullBit(oldp+408,(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use));
    bufp->fullBit(oldp+409,((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
    bufp->fullIData(oldp+410,(vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe),32);
    bufp->fullBit(oldp+411,(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+412,(vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we));
    bufp->fullWData(oldp+413,(vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+417,(vlSelf->CPU__DOT__ICache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+418,((0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                       >> 4U))),4);
    bufp->fullCData(oldp+419,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we),2);
    bufp->fullWData(oldp+420,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+424,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1]),128);
    bufp->fullCData(oldp+428,(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+429,((vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+430,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0]),25);
    bufp->fullIData(oldp+431,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1]),25);
    bufp->fullSData(oldp+432,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+433,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullCData(oldp+434,(vlSelf->CPU__DOT__ICache_inst__DOT__hit),2);
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))));
    bufp->fullBit(oldp+436,((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))));
    bufp->fullBit(oldp+437,((1U & (~ ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__lru) 
                                      >> (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+438,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+439,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update));
    bufp->fullBit(oldp+440,(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+441,(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf));
    __Vtemp_18[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][0U];
    __Vtemp_18[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][1U];
    __Vtemp_18[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][2U];
    __Vtemp_18[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h323f0fa6__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_19, __Vtemp_18, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+442,(__Vtemp_19),128);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_20, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+446,(__Vtemp_20),128);
    bufp->fullSData(oldp+450,(vlSelf->CPU__DOT__ICache_inst__DOT__lru),16);
    bufp->fullCData(oldp+451,(vlSelf->CPU__DOT__ICache_inst__DOT__state),2);
    bufp->fullBit(oldp+452,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))));
    __Vtemp_21[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_21[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_21[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_21[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+453,(__Vtemp_21),128);
    bufp->fullCData(oldp+457,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+458,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+462,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+466,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+470,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+474,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+478,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+482,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+486,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+490,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+494,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+498,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+502,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+506,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+510,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+514,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+518,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullBit(oldp+522,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we) 
                                   >> 1U))));
    __Vtemp_22[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_22[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_22[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_22[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+523,(__Vtemp_22),128);
    bufp->fullCData(oldp+527,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+528,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+532,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+536,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+540,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+544,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+548,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+552,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+556,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+560,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+564,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+568,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+572,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+576,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+580,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+584,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+588,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+592,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+593,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+594,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+595,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+596,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+597,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+598,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+599,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+600,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+601,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+602,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+603,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+604,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+605,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+606,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+607,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+608,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+609,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+610,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+611,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+612,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+613,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+614,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+615,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+616,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+617,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+618,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+619,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+620,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+621,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+622,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+623,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+624,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+625,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+626,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+627,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+628,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+629,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullCData(oldp+630,((7U & (vlSelf->CPU__DOT__inst_ex 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+631,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),32);
    bufp->fullIData(oldp+632,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
    bufp->fullIData(oldp+633,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
    bufp->fullIData(oldp+634,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
    bufp->fullIData(oldp+635,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
    bufp->fullIData(oldp+636,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
    bufp->fullIData(oldp+637,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
    bufp->fullIData(oldp+638,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
    bufp->fullIData(oldp+639,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
    bufp->fullIData(oldp+640,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
    bufp->fullIData(oldp+641,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
    bufp->fullIData(oldp+642,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
    bufp->fullIData(oldp+643,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
    bufp->fullIData(oldp+644,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
    bufp->fullIData(oldp+645,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
    bufp->fullIData(oldp+646,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
    bufp->fullIData(oldp+647,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
    bufp->fullIData(oldp+648,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
    bufp->fullIData(oldp+649,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
    bufp->fullIData(oldp+650,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
    bufp->fullIData(oldp+651,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
    bufp->fullIData(oldp+652,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
    bufp->fullIData(oldp+653,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
    bufp->fullIData(oldp+654,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
    bufp->fullIData(oldp+655,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
    bufp->fullIData(oldp+656,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
    bufp->fullIData(oldp+657,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
    bufp->fullIData(oldp+658,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
    bufp->fullIData(oldp+659,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
    bufp->fullIData(oldp+660,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
    bufp->fullIData(oldp+661,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
    bufp->fullIData(oldp+662,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
    bufp->fullIData(oldp+663,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
    bufp->fullBit(oldp+664,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                   >> 3U))));
    bufp->fullCData(oldp+665,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt),3);
    bufp->fullCData(oldp+666,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt),2);
    bufp->fullBit(oldp+667,(vlSelf->clk));
    bufp->fullBit(oldp+668,(vlSelf->rstn));
    bufp->fullIData(oldp+669,(vlSelf->araddr),32);
    bufp->fullBit(oldp+670,(vlSelf->arvalid));
    bufp->fullBit(oldp+671,(vlSelf->arready));
    bufp->fullCData(oldp+672,(vlSelf->arlen),8);
    bufp->fullCData(oldp+673,(vlSelf->arsize),3);
    bufp->fullCData(oldp+674,(vlSelf->arburst),2);
    bufp->fullIData(oldp+675,(vlSelf->rdata),32);
    bufp->fullCData(oldp+676,(vlSelf->rresp),2);
    bufp->fullBit(oldp+677,(vlSelf->rvalid));
    bufp->fullBit(oldp+678,(vlSelf->rready));
    bufp->fullBit(oldp+679,(vlSelf->rlast));
    bufp->fullIData(oldp+680,(vlSelf->awaddr),32);
    bufp->fullBit(oldp+681,(vlSelf->awvalid));
    bufp->fullBit(oldp+682,(vlSelf->awready));
    bufp->fullCData(oldp+683,(vlSelf->awlen),8);
    bufp->fullCData(oldp+684,(vlSelf->awsize),3);
    bufp->fullCData(oldp+685,(vlSelf->awburst),2);
    bufp->fullIData(oldp+686,(vlSelf->wdata),32);
    bufp->fullCData(oldp+687,(vlSelf->wstrb),4);
    bufp->fullBit(oldp+688,(vlSelf->wvalid));
    bufp->fullBit(oldp+689,(vlSelf->wready));
    bufp->fullBit(oldp+690,(vlSelf->wlast));
    bufp->fullCData(oldp+691,(vlSelf->bresp),2);
    bufp->fullBit(oldp+692,(vlSelf->bvalid));
    bufp->fullBit(oldp+693,(vlSelf->bready));
    bufp->fullBit(oldp+694,(vlSelf->commit_wb));
    bufp->fullBit(oldp+695,(vlSelf->uncache_read_wb));
    bufp->fullIData(oldp+696,(vlSelf->inst),32);
    bufp->fullIData(oldp+697,(vlSelf->pc_cur),32);
    bufp->fullIData(oldp+698,(0x80000000U),32);
    bufp->fullIData(oldp+699,(4U),32);
    bufp->fullIData(oldp+700,(2U),32);
    bufp->fullCData(oldp+701,(3U),8);
    bufp->fullCData(oldp+702,(2U),3);
    bufp->fullIData(oldp+703,(0x20U),32);
    bufp->fullIData(oldp+704,(0U),32);
    bufp->fullIData(oldp+705,(0x18U),32);
    bufp->fullIData(oldp+706,(0x10U),32);
    bufp->fullIData(oldp+707,(0x80U),32);
    bufp->fullCData(oldp+708,(1U),3);
    bufp->fullCData(oldp+709,(3U),3);
    bufp->fullCData(oldp+710,(5U),3);
    bufp->fullCData(oldp+711,(6U),3);
    bufp->fullCData(oldp+712,(7U),3);
}
