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

// `define ysyx_22050243_EBREAK    7'b11100_11


module ysyx_22050243_Ctrl (
    input  wire [6:0] opcode, // INST[6:0]
    input  wire [2:0] funct3,
    output reg        alu_src,
    output reg  [2:0] mem2reg, // 000 ALU 2 reg, 001 mem 2 reg, 010 imm 2 reg, 011 PC+4 2 reg, 100 PC+imm 2 reg
    output reg        reg_w,
    output reg        mem_r,
    output reg        mem_w,
    output reg        branch,
    output reg  [1:0] pc_src_ctrl, // 10 reg_imm 2 branch, 01 00
    output reg  [2:0] alu_op,
    output reg        csr_r
);
    import "DPI-C" function void ebreak();
    import "DPI-C" function void ID_ctrl_show(input longint opcode);
    import "DPI-C" function void ID_funct3_show(input longint funct3);
    always_latch @(*) begin
        case (opcode)
            7'b00000_00: begin             
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_0_0_0_0_00_000;
            ID_ctrl_show(64'b0);
            end
            `ysyx_22050243_LUI:     // lui      
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_010_1_0_0_0_00_000;
            `ysyx_22050243_AUIPC:   // auipc 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_100_1_0_0_0_00_000;
            `ysyx_22050243_JAL:     // jal 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_011_1_0_0_0_01_000;
            `ysyx_22050243_JALR:    // jalr
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_011_1_0_0_0_10_000;
            `ysyx_22050243_BRANCH:  // beq, bne, blt, bge, bltu, bgeu 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_0_0_0_1_00_001;
            `ysyx_22050243_LOAD:    // lb, lh, lw, lbu, lhu  
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_1_001_1_1_0_0_00_000;
            `ysyx_22050243_STORE:   // sb, sh, sw 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_1_000_0_0_1_0_00_000;
            `ysyx_22050243_OP_IMM:  // addi,     slti, sltiu, xori, ori, andi, slli, srli, srai 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_1_000_1_0_0_0_00_011;
            `ysyx_22050243_OP:      // add, sub, slt,  sltu,  xor,  or,  and,  sll,  srl,  sra 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_1_0_0_0_00_010;
            // fence
            7'b00011_11:             
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_0_0_0_0_00_000;
            // CSR
            7'b11100_11: begin
                if(funct3 === 3'b000) begin// ebreak
                // {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_0_0_0_0_00_000;
                    ID_ctrl_show(64'b11100_11);
                    ID_funct3_show(64'b0);
                    ebreak();
                end
                else                 
                {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b1_0_101_1_0_0_0_00_000;
            end
            `ysyx_22050243_OP_IMM32:// addiw, slliw, srliw, sraiw
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_1_000_1_0_0_0_00_111;
            `ysyx_22050243_OP_32:   // addw, subw, sllw, srlw, sraw 
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_1_0_0_0_00_110;
            default:                
            {csr_r, alu_src, mem2reg, reg_w, mem_r, mem_w, branch, pc_src_ctrl, alu_op} = 14'b0_0_000_0_0_0_0_00_000;
        endcase
    end

endmodule
