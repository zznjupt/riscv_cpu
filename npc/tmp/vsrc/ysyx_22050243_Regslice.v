module ysyx_22050243_Regslice # (
    parameter DATA_WIDTH = 1
) (
    input  wire                     clk,
    input  wire                     rst,
    input  wire                     en,
    input  wire                     stall,
    input  wire                     flush,

    input  wire [DATA_WIDTH-1 : 0]  din,
    output reg  [DATA_WIDTH-1 : 0]  dout 
);
    always @(posedge clk) begin
        if(rst)         dout <= 'd0;
        else if(flush)  dout <= 'd0;
        else if(stall)  dout <= dout;
        else if(en)     dout <= din;
        else            dout <= 'd0;
    end

endmodule
