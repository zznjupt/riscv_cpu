module ysyx_22050243_Fwd # (
    parameter GPR_ADDR_WIDTH = 5
) (
    input  [GPR_ADDR_WIDTH-1 : 0] rs1_id_2_ex_ff,
    input  [GPR_ADDR_WIDTH-1 : 0] rs2_id_2_ex_ff,
    input  [GPR_ADDR_WIDTH-1 : 0] rd_ex_2_mem_ff,
    input  [GPR_ADDR_WIDTH-1 : 0] rd_mem_2_wb_ff,
    input                      reg_w_ex_2_mem_ff,
    input                      reg_w_mem_2_wb_ff,

    output reg [1:0]              fwd_a,
    output reg [1:0]              fwd_b
);
    always @(*) begin
        if     (reg_w_ex_2_mem_ff && (rd_ex_2_mem_ff != 'd0) && (rd_ex_2_mem_ff == rs1_id_2_ex_ff)) fwd_a = 2'b10;
        else if(reg_w_mem_2_wb_ff && (rd_mem_2_wb_ff != 'd0) && (rd_mem_2_wb_ff == rs1_id_2_ex_ff)) fwd_a = 2'b01;
        else                                                                                        fwd_a = 2'b00;
    end

    always @(*) begin
        if     (reg_w_ex_2_mem_ff && (rd_ex_2_mem_ff != 'd0) && (rd_ex_2_mem_ff == rs2_id_2_ex_ff)) fwd_b = 2'b10;
        else if(reg_w_mem_2_wb_ff && (rd_mem_2_wb_ff != 'd0) && (rd_mem_2_wb_ff == rs2_id_2_ex_ff)) fwd_b = 2'b01;
        else                                                                                        fwd_b = 2'b00;
    end

endmodule
