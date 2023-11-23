module SegReg_LS_WB#(
    parameter PC_RESET_VAL = 32'h0
)(
    input  logic [ 0:0] clk,
    input  logic [ 0:0] rstn,
    input  logic [ 0:0] stall,
    input  logic [ 0:0] flush,

    input  logic [31:0] pc_ls,
    input  logic [31:0] inst_ls,
    input  logic [31:0] alu_result_ls,
    input  logic [31:0] mem_rdata_ls,
    input  logic [ 0:0] wb_rf_sel_ls,
    input  logic [ 0:0] rf_we_ls,
    input  logic [ 0:0] commit_ls,
    input  logic [ 0:0] read_ls,
    input  logic [ 2:0] csr_op_ls,
    input  logic [ 0:0] csr_we_ls,
    input  logic [11:0] csr_addr_ls,
    input  logic [31:0] csr_data_ls,

    output logic [31:0] pc_wb,
    output logic [31:0] inst_wb,
    output logic [31:0] alu_result_wb,
    output logic [31:0] mem_rdata_wb,
    output logic [ 0:0] wb_rf_sel_wb,
    output logic [ 0:0] rf_we_wb,
    output logic [ 0:0] commit_wb,
    output logic [ 0:0] uncache_read_wb,
    output logic [ 2:0] csr_op_wb,
    output logic [ 0:0] csr_we_wb,
    output logic [11:0] csr_addr_wb,
    output logic [31:0] csr_data_wb
);
    always_ff @(posedge clk) begin
        if(!rstn || flush) begin
            pc_wb           <= PC_RESET_VAL;
            inst_wb         <= 32'h13;
            alu_result_wb   <= 32'h0;
            mem_rdata_wb    <= 32'h0;
            wb_rf_sel_wb    <= 1'h0;
            rf_we_wb        <= 1'h0;
            commit_wb       <= 1'h0;
            uncache_read_wb <= 1'h0;
            csr_op_wb       <= 3'h0;
            csr_we_wb       <= 1'h0;
            csr_addr_wb     <= 12'h0;
            csr_data_wb     <= 32'h0;
        end 
        else if(!stall) begin
            pc_wb           <= pc_ls;
            inst_wb         <= inst_ls;
            alu_result_wb <= alu_result_ls;
            mem_rdata_wb    <= mem_rdata_ls;
            wb_rf_sel_wb    <= wb_rf_sel_ls;
            rf_we_wb        <= rf_we_ls;
            commit_wb       <= commit_ls;
            uncache_read_wb <= read_ls && alu_result_ls[31:28] == 4'ha;
            csr_op_wb       <= csr_op_ls;
            csr_we_wb       <= csr_we_ls;
            csr_addr_wb     <= csr_addr_ls;
            csr_data_wb     <= csr_data_ls;
        end
    end

endmodule