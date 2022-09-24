module ysyx_22050243_exception_detect # (
    parameter ADDR_WIDTH = 12,
    parameter IBUS_DATA_WIDTH = 32,
    parameter DBUS_DATA_WIDTH = 64
) (
    input  [IBUS_DATA_WIDTH-1 : 0] inst_mem_2_wb_ff,
    input                          clint_timer_irq,
    input  [DBUS_DATA_WIDTH-1 : 0] mie,
    input  [DBUS_DATA_WIDTH-1 : 0] mstatus,

    output                         exception_stall,
    output                         irq_stall,
    output reg [1:0]               excep_csr_update,
    output                         mret_csr_update,
    output                         core_ready
);
    wire clint_timer_irq_valid;

    assign core_ready            = mstatus[3] & mie[7];
    assign clint_timer_irq_valid = clint_timer_irq & mstatus[3] & mie[7];
    assign exception_stall       = (inst_mem_2_wb_ff[6:0] == 7'b11100_11 && inst_mem_2_wb_ff[31:20] == 12'd0) //ecall;
    assign irq_stall             = clint_timer_irq_valid;
    assign mret_csr_update       = (inst_mem_2_wb_ff[6:0] == 7'b11100_11 && inst_mem_2_wb_ff[31:20] == 12'b0011000_00010);

    always @(*) begin
        if(exception_stall)            excep_csr_update = 2'b01;
        else if(clint_timer_irq_valid) excep_csr_update = 2'b10;
        else                           excep_csr_update = 2'b00;
    end
    
endmodule
