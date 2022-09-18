module ysyx_22050243_ADDER # (
    parameter DATA_WIDTH = 64
) (
    input  [DATA_WIDTH-1 : 0] a,
    input  [DATA_WIDTH-1 : 0] b,
    output [DATA_WIDTH-1 : 0] s
);
    assign s = a + b;
endmodule
