module ysyx_22050243_Extend # (
    parameter IS_SIGNED = -1,
    parameter DATA_WIDTH_I = -1,
    parameter DATA_WIDTH_O = -1
) (
    input  wire [DATA_WIDTH_I-1 : 0] i_data;
    output reg  [DATA_WIDTH_O-1 : 0] data_o;
);
    always @(*) begin
        if(IS_SIGNED == 0) data_o = {{(DATA_WIDTH_O - DATA_WIDTH_I) {1'b0}},                   i_data};
        else               data_o = {{(DATA_WIDTH_O - DATA_WIDTH_I) {i_data[DATA_WIDTH_I-1]}}, i_data};
    end

endmodule

