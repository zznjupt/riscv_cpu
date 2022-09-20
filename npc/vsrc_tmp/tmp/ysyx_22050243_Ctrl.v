// top define

`define ysyx_22050243_ZERO_WORD 64'h0000_0000_0000_0000
`define ysyx_22050243_PC_START  64'h0000_0000_8000_0000

// RV32I opcode field(include RV64I extended)

`define ysyx_22050243_LUI       7'b01101_11
`define ysyx_22050243_AUIPC     7'b00101_11

`define ysyx_22050243_OP_IMM    7'b00100_11
`define ysyx_22050243_OP_IMM32  7'b00110_11
`define ysyx_22050243_OP_32     7'b01110_11
`define ysyx_22050243_OP        7'b01100_11

`define ysyx_22050243_JAL       7'b11011_11
`define ysyx_22050243_JALR      7'b11001_11
`define ysyx_22050243_BRANCH    7'b11000_11

`define ysyx_22050243_STORE     7'b01000_11
`define ysyx_22050243_LOAD      7'b00000_11

`define ysyx_22050243_EBREAK    7'b11100_11


module ysyx_22050243_Ctrl (
    input  wire [6:0] opcode, // INST[6:0]
    //input  wire [2:0] funct3,
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
