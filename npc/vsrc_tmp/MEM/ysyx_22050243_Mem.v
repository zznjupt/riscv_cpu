module ysyx_22050243_Mem # (
    parameter IBUS_DATA_WIDTH = 32,
    parameter DBUS_DATA_WIDTH = 64,
    parameter IMEM_DATA_WIDTH = 64,
    parameter DMEM_DATA_WIDTH = 64
) (
    input           clk,
    input  [63:0]   inst_addr,
    input           inst_en,

    output [31:0]   inst,

    input           data_w_en,
    input           data_r_en,
    input  [64:0]   data_addr,
    input  [64:0]   data_w,
    
    output [64:0]   data_r
);
    assign inst = (inst_en == 1'b1) ? 


    always @(posedge clk) begin

    end

endmodule
