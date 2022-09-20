module ysyx_22050243_hazard_detect # (
    parameter GPR_ADDR_WIDTH = 5
) (
    input  [GPR_ADDR_WIDTH-1 : 0]   rs1_if_2_id_ff,
    input  [GPR_ADDR_WIDTH-1 : 0]   rs2_if_2_id_ff,
    input  [GPR_ADDR_WIDTH-1 : 0]    rd_id_2_ex_ff,
    input                         mem_r_id_2_ex_ff,
    input                         csr_r_id_2_ex_ff,
    output reg                    stall
);
    always @(*) begin
        if((mem_r_id_2_ex_ff | (csr_r_id_2_ex_ff != 0)) && 
           ((rd_id_2_ex_ff == rs1_if_2_id_ff) || (rd_id_2_ex_ff == rs2_if_2_id_ff)) &&
           (rd_id_2_ex_ff != 0)
        ) stall = 1'b1;
        else stall = 1'b0;
    end
endmodule
