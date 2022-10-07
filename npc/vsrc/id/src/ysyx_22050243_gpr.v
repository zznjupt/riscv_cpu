module ysyx_22050243_gpr (
    input  wire             clk,
    input  wire             rst,
    input  wire [5:0]       stall,
    // w
    input  wire             w_e,
    input  wire [4:0]       waddr,
    input  wire [63:0]      wdata,
    // r1
    input  wire             r1_e,
    input  wire [4:0]       raddr1,
    output reg  [63:0]      rdata1,
    // r2
    input  wire             r2_e,
    input  wire [4:0]       raddr2,
    output reg  [63:0]      rdata2,
    // difftest
    output wire [63:0]      gpr_o[31:0]          
);
    reg[63:0] gpr[31:0];

    // w
    always @(posedge clk) begin
        if(rst == 1'b0) begin
            if(stall[3]) begin end
        end
        else if((w_e == 1'b1) && (waddr != 5'b0))                       gpr[waddr] <= wdata;
    end
    // r1
    always @(*) begin
        if(rst == 1'b1)                                                 rdata1 = 64'h0;
        else if(raddr1 == 5'b0)                                         rdata1 = 64'h0;
        //correlation resolution with interal of 2 (RAW)
        else if((raddr1 == waddr) && (w_e == 1'b1) && (r1_e == 1'b1))   rdata1 = wdata;
        else if(r1_e == 1'b1)                                           rdata1 = gpr[raddr1];
        else                                                            rdata1 = 64'h0;
    end

    // r2
    always @(*) begin
        if(rst == 1'b1)                                                 rdata2 = 64'h0;
        else if(raddr2 == 5'b0)                                         rdata2 = 64'h0;
        //correlation resolution with interal of 2 (RAW)
        else if((raddr2 == waddr) && (w_e == 1'b1) && (r2_e == 1'b1))   rdata2 = wdata;
        else if(r2_e == 1'b1)                                           rdata2 = gpr[raddr2];
        else                                                            rdata2 = 64'h0;
    end

    //difftest assignment
	genvar i;
	generate
		for (i = 0; i < 32; i = i + 1) begin: gpr_task
			assign gpr_o[i] = (w_e & waddr == i & i != 0) ? wdata : gpr[i];
		end
	endgenerate

endmodule
