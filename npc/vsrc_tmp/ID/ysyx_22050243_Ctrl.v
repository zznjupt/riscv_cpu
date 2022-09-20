module ysyx_22050243_Ctrl (
    input  wire [6:0] opcode, // INST[6:0]
    input  wire [2:0] funct3,
    output reg        alu_src,
    output reg  [2:0] alu_op
);
    always @(*) begin
        case (opcode)
            `ysyx_22050243_OP_IMM: {alu_src, alu_op} = 4'b1_011;
            default: {alu_src, alu_op} = 4'b0_000;
        endcase
    end
endmodule
