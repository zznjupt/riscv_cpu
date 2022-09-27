module ysyx_22050243_Mem # (
    // parameter IBUS_DATA_WIDTH = 32,
    // parameter DBUS_DATA_WIDTH = 64,
    // parameter IMEM_DATA_WIDTH = 64,
    // parameter DMEM_DATA_WIDTH = 64
) (
    input           clk,

    // input  [63:0]   inst_addr,
    // input           inst_en,

    // output [31:0]   inst,

    input           data_w_en,
    input           data_r_en,
    input  [7:0]    data_wmask,
    input  [63:0]   data_addr,
    input  [63:0]   data_w,
    
    output [63:0]   data_r
);
    // import "DPI-C" function void IF_inst_read(input longint inst_addr, input bit inst_en);
    import "DPI-C" function void MEM_pmem_write(input longint waddr, input longint wdata, input byte wmask, input bit w_en);
    import "DPI-C" function void MEM_pmem_read(input longint raddr, output longint rdata, input bit r_en);

    // always @(*) begin
    //     IF_inst_read(inst_addr, inst_en);
    // end

    always @(posedge clk) begin
        MEM_pmem_write(data_addr, data_w, data_wmask, data_w_en);
        $display("vprintf: i_data_w     = 0x%x", data_w);
        $display("vprintf: i_data_wmask = 0x%lx", data_wmask);
    end

    always @(*) begin
        MEM_pmem_read(data_addr, data_r, data_r_en);
        $display("vprintf: o_data_r = 0x%x", data_r);
    end

endmodule
