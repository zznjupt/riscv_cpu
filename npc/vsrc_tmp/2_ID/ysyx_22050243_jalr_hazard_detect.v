`define ysyx_22050243_JALR      7'b11001_11

module ysyx_22050243_jalr_hazard_detect # (
    parameter GPR_ADDR_WIDTH  = 5,
    parameter IBUS_DATA_WIDTH = 32
) (
    input  [IBUS_DATA_WIDTH-1 : 0]   inst_if_2_id_ff,
    input  [GPR_ADDR_WIDTH -1 : 0]     rd_id_2_ex_ff,
    input                           reg_w_id_2_ex_ff,
    input  [GPR_ADDR_WIDTH -1 : 0]    rd_ex_2_mem_ff,
    input                          mem_r_ex_2_mem_ff,
    input  [GPR_ADDR_WIDTH -1 : 0]    rd_mem_2_wb_ff,
    input                          reg_w_mem_2_wb_ff,

    output reg [1:0]               fwd_jalr,
    output reg                     stall_jalr
);
    // stall_jalr
    always @(*) begin
        if(inst_if_2_id_ff[6:0] == `ysyx_22050243_JALR) begin
            if     (inst_if_2_id_ff[19:15] == rd_id_2_ex_ff  && reg_w_id_2_ex_ff)  stall_jalr = 1'b1;
            else if(inst_if_2_id_ff[19:15] == rd_ex_2_mem_ff && mem_r_ex_2_mem_ff) stall_jalr = 1'b1;
            else stall_jalr = 1'b0;
        end
        else stall_jalr = 1'b0;
    end
    // fwd_jalr
    always @(*) begin
        if(inst_if_2_id_ff[6:0] == `ysyx_22050243_JALR) begin
            if     (inst_if_2_id_ff[19:15] == rd_ex_2_mem_ff && reg_w_id_2_ex_ff && !mem_r_ex_2_mem_ff) fwd_jalr = 2'b01;
            else if(inst_if_2_id_ff[19:15] == rd_mem_2_wb_ff && reg_w_mem_2_wb_ff) fwd_jalr = 2'b10;
            else  fwd_jalr = 2'b00;
        end
        else fwd_jalr = 2'b00; 
    end
endmodule
