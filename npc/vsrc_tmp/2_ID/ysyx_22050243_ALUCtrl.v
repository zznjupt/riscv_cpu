module ysyx_22050243_ALUCtrl (
    input      [2:0] alu_op, 
    input      [3:0] funct,
    output reg [3:0] alu_ctrl
);
    always @(*) begin
        if(alu_op == 3'b000)        alu_ctrl = 4'b0000;
        else if(alu_op == 3'b001)   alu_ctrl = 4'b1000;
        else if(alu_op == 3'b010)
            case(funct)
                4'b0000:            alu_ctrl = 4'b0000; // add
                4'b1000:            alu_ctrl = 4'b1000; // sub
                4'b0001:            alu_ctrl = 4'b0001; // sll
                4'b0010:            alu_ctrl = 4'b0010; // slt
                4'b0011:            alu_ctrl = 4'b0011; // sltu
                4'b0100:            alu_ctrl = 4'b0100; // xor
                4'b0101:            alu_ctrl = 4'b0101; // srl
                4'b1101:            alu_ctrl = 4'b1101; // sra
                4'b0110:            alu_ctrl = 4'b0110; // or
                4'b0111:            alu_ctrl = 4'b0111; // and
                default:            alu_ctrl = 4'b1111;
            endcase
        else if(alu_op == 3'b011) // op_imm
            casez(funct)
                4'b?000:            alu_ctrl = 4'b0000; // addi
                4'b0001:            alu_ctrl = 4'b0001; // slli
                4'b?010:            alu_ctrl = 4'b0010; // slti
                4'b?011:            alu_ctrl = 4'b0011; // sltui
                4'b?100:            alu_ctrl = 4'b0100; // xori
                4'b0101:            alu_ctrl = 4'b0101; // srli
                4'b1101:            alu_ctrl = 4'b1101; // srai
                4'b?110:            alu_ctrl = 4'b0110; // ori
                4'b?111:            alu_ctrl = 4'b0111; // andi
                default:            alu_ctrl = 4'b1111;
            endcase
        else if(alu_op == 3'b110)
            case(funct)
                4'b0000:            alu_ctrl = 4'b1001; // addw
                4'b1000:            alu_ctrl = 4'b1010; // subw
                4'b0001:            alu_ctrl = 4'b1011; // sllw
                4'b0101:            alu_ctrl = 4'b1100; // srlw
                4'b1101:            alu_ctrl = 4'b1110; // sraw
                default:            alu_ctrl = 4'b1111;
            endcase
        else if(alu_op == 3'b111)
            case(funct)
                4'b0000:            alu_ctrl = 4'b1001; // addw
                4'b1000:            alu_ctrl = 4'b1001; // addw
                4'b0001:            alu_ctrl = 4'b1011; // sllw
                4'b0101:            alu_ctrl = 4'b1100; // srlw
                4'b1101:            alu_ctrl = 4'b1110; // sraw
                default:            alu_ctrl = 4'b1111;
            endcase
        else                        alu_ctrl = 4'b1111;
    end

endmodule
