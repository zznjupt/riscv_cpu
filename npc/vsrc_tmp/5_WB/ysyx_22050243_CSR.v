`define M_CYCLE     12'hb00
`define MSTATUS     12'h300
`define MIE         12'h304
`define MTVEC       12'h305
`define MEPC        12'h341
`define MCAUSE      12'h342
`define MTVAL       12'h343
`define MINSTRET    12'hb02
`define MSCRATCH    12'h340


module ysyx_22050243_CSR # (
    parameter ADDR_WIDTH      = 12,
    parameter IBUS_DATA_WIDTH = 32,
    parameter DBUS_DATA_WIDTH = 64
) (
    input                               clk,
    input                               rst,
    input                               w_en,
    input      [ADDR_WIDTH-1 : 0]       w_addr,
    input      [DBUS_DATA_WIDTH-1 : 0]  w_data,
    input                               r_en,
    input      [ADDR_WIDTH-1 : 0]       r_addr,
    output reg [DBUS_DATA_WIDTH-1 : 0]  r_data,

    output     [DBUS_DATA_WIDTH-1 : 0]  pc_mtvec,
    output     [DBUS_DATA_WIDTH-1 : 0]  pc_mepc,
    
    input      [IBUS_DATA_WIDTH-1 : 0]  inst_if_stage,
    input      [IBUS_DATA_WIDTH-1 : 0]  inst_if_2_id_ff,
    input      [IBUS_DATA_WIDTH-1 : 0]  inst_id_2_ex_ff,
    input      [IBUS_DATA_WIDTH-1 : 0]  inst_ex_2_mem_ff,
    input      [IBUS_DATA_WIDTH-1 : 0]  inst_mem_2_wb_ff,

    input      [DBUS_DATA_WIDTH-1 : 0]  pc_if_stage,
    input      [DBUS_DATA_WIDTH-1 : 0]  pc_if_2_id_ff,
    input      [DBUS_DATA_WIDTH-1 : 0]  pc_id_2_ex_ff,
    input      [DBUS_DATA_WIDTH-1 : 0]  pc_ex_2_mem_ff,
    input      [DBUS_DATA_WIDTH-1 : 0]  pc_mem_2_wb_ff,

    input      [1:0]                    excep_csr_update,
    input                               mret_csr_update,

    output     [DBUS_DATA_WIDTH-1 : 0]  mie,
    output     [DBUS_DATA_WIDTH01 : 0]  mstatus    
);
    reg  [DBUS_DATA_WIDTH-1:0] csr [2**ADDR_WIDTH-1:0];

    always @(*) begin
        if(rst)                 r_data = 'd0;
        else if(r_en)           r_data = csr[r_addr];
        else                    r_data = 'd0;
    end

    // 时钟周期计数器 mcycle
    always @(posedge clk) begin
        if(rst)                             csr[`M_CYCLE] <= 'd0;
        else if(w_en && w_addr == `M_CYCLE) csr[`M_CYCLE] <= w_data;
        else                                csr[`M_CYCLE] <= csr[`M_CYCLE] + 'd1;
    end

    // 状态控制器    mstatus
    wire [63:0] w_mstatus;
    assign w_mstatus = csr[`MSTATUS];
    assign mstatus = w_mstatus;
    always @(posedge clk) begin
        if(rst)                             csr[`MSTATUS] <= 'd0;
        else if(excep_csr_update != 2'b00)  csr[`MSTATUS] <= {w_mstatus[63:13], 2'b11, w_mstatus[10:8], w_mstatus[3], w_mstatus[6:4],
                                                              1'b0, w_mstatus[2:0]};
        else if(mret_csr_update)            csr[`MSTATUS] <= {w_mstatus[63:13], 2'b11, w_mstatus[10:8], 1'b1, w_mstatus[6:4],
                                                              w_mstatus[7], w_mstatus[2:0]};
        else if(w_en && w_addr == `MSTATUS) csr[`MSTATUS] <= {((w_data[16:15]==2'b11)|(w_data[14:13]==2'b11)), w_data[62:0]};
        else                                csr[`MSTATUS] <= csr[`MSTATUS];
    end

    // 异常程序指针  mepc
    reg  [31:0] r_mepc_inst;
    assign pc_mepc = csr[`MEPC];
    always @(posedge clk) begin
        if(rst) begin
            r_mepc_inst <= 'd0;
            csr[`MEPC]  <= 'd0;
        end
        else if(excep_csr_update == 2'b01) begin
            csr[`MEPC]  <= pc_mem_2_wb_ff;  // save the pc before trap
            r_mepc_inst <= inst_mem_2_wb_ff;
        end
        else if(excep_csr_update == 2'10) begin
            if     (pc_mem_2_wb_ff != 'd0) begin
                r_mepc_inst <= inst_mem_2_wb_ff;
                csr[`MEPC]  <= pc_mem_2_wb_ff;
            end
            else if(pc_ex_2_mem_ff != 'd0) begin
                r_mepc_inst <= inst_ex_2_mem_ff;
                csr[`MEPC]  <= pc_ex_2_mem_ff;
            end
            else if(pc_if_2_id_ff  != 'd0) begin
                r_mepc_inst <= inst_id_2_ex_ff;
                csr[`MEPC]  <= pc_id_2_ex_ff;
            end
            else begin
                r_mepc_inst <= inst_id_2_ex_ff;
                csr[`MEPC]  <= pc_if_stage;
            end
        end
        else if(w_en && w_addr == `MEPC) begin
            csr[`MEPC]  <= w_data;
            r_mepc_inst <= r_mepc_inst;
        end
        else begin
            csr[`MEPC]  <= csr[`MEPC];
            r_mepc_inst <= r_mepc_inst;
        end
    end

    // 异常/中断原因 mcause
    wire [63:0] w_mcause;
    assign w_mcause = csr[`MCAUSE];
    always @(posedge clk) begin
        if(rst)                             csr[`MCAUSE] <= 'd0;
        else if(excep_csr_update == 2'b01)  csr[`MCAUSE] <= 64'd11;
        else if(excep_csr_update == 2'b10)  csr[`MCAUSE] <= 64'h8000_0000_0000_0007;
        else if(w_en && w_addr == `MCAUSE)  csr[`MCAUSE] <= w_data;
        else                                csr[`MCAUSE] <= csr[`MCAUSE];
    end

    // 异常/中断的补充信息 mtval（如异常指令，非法地址）
    wire [63:0] w_mtval;
    assign w_mtval = csr[`MTVAL];
    always @(posedge clk) begin
        csr[`MTVAL] <= 64'd0;
    end

    // 退休指令计数器 minstret
    wire [63:0] w_minstret
    assign w_minstret = csr[`MINSTRET];
    always @(posedge clk) begin
        if(rst)                              csr[`MINSTRET] <= 'd0;
        else if(excep_csr_update != 2'b10
             && inst_mem_2_wb_ff != 'd0)     csr[`MINSTRET] <= csr[`MINSTRET] + 64'd1;
        else                                 csr[`MINSTRET] <= csr[`MINSTRET];
    end

    // 提供一个上下文保存寄存器 mscratch
    wire [63:0] w_mscratch
    assign w_mscratch = csr[`MSCRATCH];
    always @(posedge clk) begin
        if(rst)                              csr[`MSCRATCH] <= 'd0;
        else if(w_en && w_addr == `MSCRATCH) csr[`MSCRATCH] <= w_data;
        else                                 csr[`MSCRATCH] <= csr[`MSCRATCH];
    end
endmodule
