module ysyx_22050243_ALUCtrl (
    input      [2:0] alu_op, 
    input      [3:0] funct,
    output reg [3:0] alu_ctrl
);
    always @(*) begin
        if(alu_op == 3'b000) alu_ctrl = 4'b0000;
        else if (alu_op == 3'b011) // op_imm
            casez(funct)
                4'b?000: alu_ctrl = 4'b0000; // addi
                4'b0001: alu_ctrl = 4'b0001; // slli
                default: alu_ctrl = 4'b1111;
            endcase
        else             alu_ctrl = 4'b1111;
    end

endmodule

