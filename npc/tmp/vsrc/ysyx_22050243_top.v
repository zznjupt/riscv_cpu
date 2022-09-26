module ysyx_22050243_top (
    input                   clk,
    input                   rst,

    // input  [63:0]           
);
    wire            w_clint_timer_irq;
    wire            w_timer_irq_ready;
    // CPU
    wire  [31:0]    inst;
    wire            inst_valid;
    wire  [63:0]    inst_addr;
    wire            inst_en;
    wire            inst_addr_valid;

    wire            data_w_en;
    wire            data_r_en;
    wire  [7:0]     data_wmask;
    wire  [63:0]    data_addr;
    wire  [63:0]    data_w;
    wire  [63:0]    data_r;
    wire            data_r_valid;
    wire            data_w_ready;

    // wire		    w_dmem_data_w_en;
    // wire		    w_dmem_data_r_en;
    // wire  [7:0]	    w_dmem_data_wmask;
    // wire  [63:0]	w_dmem_data_addr;
    // wire  [63:0]	w_dmem_data_w;
    // wire  [63:0]	w_dmem_data_r;
    // wire		    w_dmem_data_r_valid;
    // wire		    w_dmem_data_w_ready;

    // // Memctrl
    // wire		    data_wr_en_ram;
    // wire		    data_rd_en_ram;
    // wire  [63:0]	data_wmask_ram;
    // wire  [63:0]	data_addr_ram;
    // wire  [63:0]	data_wr_ram;
    // wire  [63:0]	data_rd_ram;

    ysyx_22050243_RISCV # (
        .IBUS_DATA_WIDTH(32),
        .DBUS_DATA_WIDTH(64),
        .GPR_ADDR_WIDTH (5),
        .IMEM_DATA_WIDTH(64),
        .DMEM_DATA_WIDTH(64)
    ) ysyx_22050243_RISCV_ (
        .clk                (clk),              // clock
        .rst                (rst),              // reset
        // INST port <-> mem_ctrl
        .i_inst             (inst),             // I <- Mem

        .i_inst_valid       (inst_valid),       // I 

        .inst_addr_o        (inst_addr),        // O -> Mem
        .inst_en_o          (inst_en),          // O -> Mem

        .inst_addr_valid_o  (inst_addr_valid),  // O
        // DATA port <-> mem_ctrl
        .data_w_en_o        (data_w_en),        // O -> Mem
        .data_r_en_o        (data_r_en),        // O -> Mem
        .data_wmask_o       (data_wmask),       // O -> Mem
        .data_addr_o        (data_addr),        // O -> Mem
        .data_w_o           (data_w),           // O -> Mem

        .i_data_r           (data_r),           // I <- Mem
        .i_data_r_valid     (data_r_valid),     // I
        .i_data_w_ready     (data_w_ready),     // I
        // IRQ
        .i_clint_timer_irq  (w_clint_timer_irq),
        .timer_irq_ready_o  (w_timer_irq_ready)
    );

    // ysyx_22050243_Memctrl ysyx_22050243_Memctrl_(
    //     .rst            (rst),

    //     .mem_byte_en    (w_dmem_data_wmask),
    //     .mem_addr       (w_dmem_data_addr),
    //     .mem_r_en       (w_dmem_data_r_en),
    //     .mem_w_en       (w_dmem_data_w_en),
    //     .mem_w_data     (w_dmem_data_w),
    //     .mem_r_data     (w_dmem_data_r),
        
    //     .ram_addr       (data_addr_ram)
    // );

    ysyx_22050243_Mem # (
        .IBUS_DATA_WIDTH(32),
        .DBUS_DATA_WIDTH(64),
        .IMEM_DATA_WIDTH(64),
        .DMEM_DATA_WIDTH(64)
    ) ysyx_22050243_Mem_ (
        .clk                (clk),          // clock

        .inst_addr          (inst_addr),    // I
        .inst_en            (inst_en),      // I

        .inst               (inst),         // O

        .data_w_en          (data_w_en),    // I
        .data_r_en          (data_r_en),    // I
        .data_wmask         (data_wmask),   // I
        .data_addr          (data_addr),    // I
        .data_w             (data_w),       // I

        .data_r             (data_r)        // O
    );

    


endmodule