module ysyx_22050243_Branch # (
    parameter WIDTH = 32
) (
    input  wire       branch,
    input  wire [2:0] funct3,
    input  wire       alu_out,
    input  wire       rs1,
    input  wire       rs2,
    input  wire       zero,
    output reg        branch_out 
);
    wire   alu_out1;
    wire   alu_out2;
    assign alu_out1 = (rs1 &~ rs2) | (( rs1 & ~rs2) & alu_out);  // rs1 < rs2 
    assign alu_out1 = (rs1 &~ rs2) | ((~rs1 & rs2 ) & alu_out);  // rs1 < rs2 (unsigned)

    always @(*) begin
        if(branch == 1'b1)
            case(funct3)
                3'b000:  branch_out =  zero;
                3'b001:  branch_out = ~zero;
                3'b100:  branch_out =  alu_out1;
                3'b101:  branch_out = ~alu_out1;
                3'b110:  branch_out =  alu_out2;
                3'b111:  branch_out = ~alu_out2;
                default: branch_out = 1'b0; 
            endcase
        else             branch_out = 1'b0;
    end

endmodule
