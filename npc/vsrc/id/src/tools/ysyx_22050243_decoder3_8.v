module ysyx_22050243_decoder3_8 (
    input  wire [2:0] in,
    output wire [7:0] out
);
    genvar i;
    generate 
        for (i = 0; i < 8; i = i + 1) begin: decoder3_8
            assign out[i] = (in == i);
        end
    endgenerate

endmodule
