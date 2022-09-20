//   INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
//   INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = src1 < imm ? 1 : 0); // unsigned
//   INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> SEXT(BITS(imm, 5, 0), 64));
//   INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << SEXT(BITS(imm, 5, 0), 64)); //
//   INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm); //
//   INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm); //

//   INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
//   INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2); 
//   INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT((uint32_t)(BITS(src1,31,0)) >> src2, 32)); //
//   INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = (int64_t)src1 < (int64_t)src2 ? 1 : 0); // signed
//   INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = src1 < src2 ? 1 : 0); // unsigned
//   INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(src1 << SEXT(BITS(src2, 4, 0), 64), 32)); //
//   INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2); //
//   INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2); //
//   INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);

//   INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = SEXT((int64_t)src1 >> SEXT(BITS(imm, 5, 0), 64), 64));
//   INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT((int32_t)(BITS(src1,31,0)) >> SEXT(BITS(imm, 5, 0), 64), 32));
//   INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + imm, 31, 0), 32));
//   INSTPAT("000000? ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT((uint32_t)(BITS(src1,31,0)) >> SEXT(BITS(imm, 5, 0), 64), 32));
//   INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(src1 << SEXT(BITS(imm, 5, 0), 64),32)); //


//   INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32));
//   INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT((int32_t)(BITS(src1,31,0)) >> src2, 32)); //
//   INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(src1 - src2, 32));
//   INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(src1 * src2, 32));
//   INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(SEXT(BITS(src1, 31, 0), 64) / SEXT(BITS(src2, 31, 0), 64), 32));

module ysyx_22050243_ALU # (
    parameter WIDTH = 64
) (
    input      signed [WIDTH-1 : 0] a,
    input      signed [WIDTH-1 : 0] b,
    input             [3:0]         alu_ctrl,
    
    output reg signed [WIDTH-1 : 0] alu_out,
    output                          zero          
);
    wire        [WIDTH-1:0]    u_a;
    wire        [WIDTH-1:0]    u_b;
    wire        [WIDTH-1:0]    add_result;
    wire        [WIDTH-1:0]    sub_result;
    wire        [31:0]         sllw_result;
    wire        [31:0]         srlw_result;
    wire signed [31:0]         sraw_result;

    assign u_a         = a;
    assign u_b         = b;
    assign add_result  = a + b;
    assign sub_result  = a - b;
    assign sllw_result = a[31:0] <<  b[4:0];
    assign srlw_result = a[31:0] >>  b[4:0];
    assign sraw_result = a[31:0] >>> b[4:0];

    always @(*) begin
        case (alu_ctrl)
            4'b0000: alu_out = add_result;                              //  add  | addi
            4'b0001: alu_out = a << b[5:0];                             //  sll  | slli
            4'b0010: alu_out = (a  < b [5:0])? 'd1 : 'd0                //  slt  | slti
            4'b0011: alu_out = (ua < ub[5:0])? 'd1 : 'd0                //  sltu | sltiu
            4'b0100: alu_out = a ^ b;                                   //  xor  | xori
            4'b0101: alu_out = a >> b[5:0];                             //  srl  | srli
            4'b0110: alu_out = a | b                                    //  or   | ori
            4'b0111: alu_out = a & b                                    //  and  | andi
            4'b1000: alu_out = sub_result;                              //  sub
            4'b1001: alu_out = {{32{add_result[31]}}, add_result[31:0]} //  addw | addiw 
            4'b
        endcase
    end


endmodule