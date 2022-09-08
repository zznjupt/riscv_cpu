`define ADD 3'b000
`define SUB 3'b001
`define NOT 3'b010
`define AND 3'b011
`define OR  3'b100
`define XOR 3'b101
`define COMPARE 3'b110
`define equal 3'b111

module ALU (
    input  [2:0] op,
    input  [3:0] A, B,
    output [3:0] alu_result,
    output reg overflow,
    // output cout,
    output zero
);
    reg [4:0] A_;
    reg [4:0] B_;
    reg [4:0] alu_reg;

    assign A_ = {A[3], A};
    assign B_ = {B[3], B};
    assign alu_result = alu_reg[3:0];
    assign zero = ~(|alu_reg);

    always @(*) begin
        overflow = 0;
        case(op)
            `ADD: begin
                alu_reg = A_ + B_;
                if(alu_reg[3]^alu_reg[4]==1) begin
                    alu_reg = 0;
                    overflow = 1;
                end
            end
            `SUB: begin
                alu_reg = A_ + (~B_+1'b1);
                if(alu_reg[3]^alu_reg[4]==1) begin
                    alu_reg = 0;
                    overflow = 1;
                end
            end
            `NOT:     alu_reg = A_ ^ 5'b11111;
            `AND:     alu_reg = A_ & B_;
            `OR:      alu_reg = A_ | B_;
            `XOR:     alu_reg = A_ ^ B_;
            `COMPARE:
alu_reg = (A[3] == B[3])?
((A[3] == 1'b0)?((A[2:0]<B[2:0])?5'b00001:5'b00000):((~A+1'b1 > ~B+1'b1)?5'b00001:5'b0000)):
((A[3] == 1'b1)?5'b00000:5'b00001);
                
                    
            default: alu_reg = 0;
        endcase
    end

endmodule
