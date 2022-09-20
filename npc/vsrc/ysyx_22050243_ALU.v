module ysyx_22050243_ALU # (
    parameter WIDTH = 64
) (
    input      signed [WIDTH-1 : 0] a,
    input      signed [WIDTH-1 : 0] b,
    input             [3:0]         alu_ctrl,
    
    output     signed [WIDTH-1 : 0] alu_result,
    output                          zero          
);
    wire        [WIDTH-1:0]    u_a;
    wire        [WIDTH-1:0]    u_b;
    wire        [WIDTH-1:0]    add_result;
    wire        [WIDTH-1:0]    sub_result;
    /* verilator lint_off UNOPTFLAT */
    reg  signed [WIDTH-1:0]    alu_out;

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
            4'b0000: alu_out = add_result;                               //  add  | addi
            4'b0001: alu_out = a << b[5:0];                              //  sll  | slli
            4'b0010: alu_out = (a   < b)? 'd1 : 'd0;                     //  slt  | slti
            4'b0011: alu_out = (u_a < u_b)? 'd1 : 'd0;                   //  sltu | sltiu
            4'b0100: alu_out = a ^ b;                                    //  xor  | xori
            4'b0101: alu_out = a >> b[5:0];                              //  srl  | srli
            4'b0110: alu_out = a | b;                                    //  or   | ori
            4'b0111: alu_out = a & b;                                    //  and  | andi
            4'b1000: alu_out = sub_result;                               //  sub
            4'b1001: alu_out = {{32{add_result[31]}},  add_result[31:0]}; //  addw | addiw 
			4'b1010: alu_out = {{32{sub_result[31]}},  sub_result[31:0]};      //  subw
			4'b1011: alu_out = {{32{sllw_result[31]}}, sllw_result};	         //  sllw | slliw
			4'b1100: alu_out = {{32{srlw_result[31]}}, srlw_result};		     //  srlw | srliw
			4'b1101: alu_out = a >>> b[5:0];						     //  sra  | srai
			4'b1110: alu_out = {{32{a[31]}}, sraw_result};		 //  sraw | sraiw 
            default: alu_out = 'd0;
        endcase
    end

    assign zero = (alu_out == 'd0);
    assign alu_result = alu_out;

endmodule
