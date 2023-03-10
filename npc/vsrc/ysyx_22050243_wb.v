`define MEM_TO_WB_WIDTH 356

// include RegisterFile (gpr amd csr)
module ysyx_22050243_wb (
    input  wire clk,
    input  wire rst,
    output wire                         wb_allowin,
    input  wire                         mem_to_wb_valid, 
    input  wire [`MEM_TO_WB_WIDTH-1:0]  mem_to_wb_bus,
    // gpr_r
    input  wire [4:0]                   raddr1,
    input  wire [4:0]                   raddr2,
    output wire [63:0]                  rdata1,
    output wire [63:0]                  rdata2,
    output reg  [63:0]                  rf [31:0],
    // gpr_w csr
    output wire [4:0]                   wb_rd,
    output wire [63:0]                  wb_reg_wdata,
    output reg                          wb_valid,
    output wire [31:0]                  wb_pc,
    output wire                         wb_reg_wen,
    output wire [63:0]                  wb_csrwdata,
    output wire [63:0]                  wb_csrrdata,
    output wire                         wb_mret,
    output wire                         wb_csr_we,
    output wire                         wb_ecall,
    output reg  [63:0]                  csr_mepc,
    output reg  [63:0]                  csr_mtvec,
    output wire [63:0]                  csr_mstatus,
    output reg  [63:0]                  csr_mcause,
    output reg  [63:0]                  csr_mie,
    output reg  [63:0]                  csr_mip,
    output reg  [63:0]                  csr_mscratch,
    output reg  [63:0]                  csr_mhartid,
    output wire                         wb_memwrite,
    output wire [63:0]                  wb_diff_data,
    output wire [63:0]                  wb_diff_addr,
    output wire                         wb_timer_int,
    output wire                         wb_ebreak,
    output wire [31:0]                  wb_instruction,
    output reg                          cmt_skip,
    input  wire                         mem_flush
);
    localparam MTVEC    = 12'h305;
    localparam MCAUSE   = 12'h342;
    localparam MSTATUS  = 12'h300;
    localparam MEPC     = 12'h341;
    localparam MIE      = 12'h304;
    localparam MIP      = 12'h344;
    localparam MSCRATCH = 12'h340;
    localparam MHARTID  = 12'hF14;
    localparam MCYCLE   = 12'hB00;

    reg  [63:0] csr_mcycle;

    wire [11:0] wb_des_csr;
    wire [63:0] wb_reg_wdata_tmp;
 
    reg  [1:0]  mstatus_mpp;
    reg         mstatus_mpie;
    reg         mstatus_mie;
    reg         wb_flush;
    wire [4:0]  wb_rs1;
    wire        wb_csrrw;
    wire        wb_csrrs;
    wire        wb_csrrc;
    wire        wb_csrrwi;
    wire        wb_csrrsi;
    wire        wb_csrrci;
    wire [63:0] wb_alu_input1;
    wire        wb_rmcycle;
    wire        wb_skip;
    wire        wb_mmio;

    assign wb_rmcycle           = (wb_des_csr == MCYCLE) & wb_csrrs;
    assign wb_skip              = wb_rmcycle | wb_mmio; 

    assign wb_csrrdata          = {64{wb_des_csr == MTVEC}}   & csr_mtvec  |
                                  {64{wb_des_csr == MCYCLE}}  & csr_mcycle |
                                  {64{wb_des_csr == MCAUSE}}  & csr_mcause | {64{wb_des_csr == MSTATUS}}  & csr_mstatus  |
                                  {64{wb_des_csr == MEPC}}    & csr_mepc   | {64{wb_des_csr == MIE}}      & csr_mie      |
                                  {64{wb_des_csr == MIP}}     & csr_mip    | {64{wb_des_csr == MSCRATCH}} & csr_mscratch |
                                  {64{wb_des_csr == MHARTID}} & csr_mhartid;

    assign wb_csrwdata          = {64{wb_csrrc}}  & wb_csrrdata  & (~wb_alu_input1)  |
                                  {64{wb_csrrci}} & wb_csrrdata  & (~{59'b0,wb_rs1}) | {64{wb_csrrs}} & (wb_csrrdata  | wb_alu_input1) |
                                  {64{wb_csrrsi}} & (wb_csrrdata | {59'b0,wb_rs1})   | {64{wb_csrrw}} & wb_alu_input1 |
                                  {64{wb_csrrwi}} & {59'b0,wb_rs1};

    assign csr_mstatus[63:13]   = 51'b0;//0x1800
    assign csr_mstatus[12:11]   = mstatus_mpp;
    assign csr_mstatus[10:8]    = 3'b0;
    assign csr_mstatus[7]       = mstatus_mpie;
    assign csr_mstatus[6:4]     = 3'b0;
    assign csr_mstatus[3]       = mstatus_mie;
    assign csr_mstatus[2:0]     = 3'b0;

  //hard wired value:
  //1:MPP(12:11) (TBC)
  //0:uie(0),sie(1),WPRI(2),upie(4),spie(5),WPRI(6),SPP(8),WPRI(10:9),(31:17) 
  //XSL[1](35 TBC) UXL[1](33 TBC) XS(16:15 TBC) FS(14:13 TBC)

    always @(posedge clk) begin
        cmt_skip <= wb_skip;

        if(rst)                                       mstatus_mpp  <= 2'b11;//write on 6
        else if(wb_mret)                              mstatus_mpp  <= 2'b11; // do not support user mode for now
        else if(wb_ecall & wb_valid)                  mstatus_mpp  <= 2'b11; // ?
        else if(wb_csr_we && wb_des_csr == MSTATUS)   mstatus_mpp  <= wb_csrwdata[12:11];
        if(rst)                                       mstatus_mpie <= 1'b0;
        else if(wb_ecall & wb_valid)                  mstatus_mpie <= mstatus_mie;
        else if(wb_mret & wb_valid)                   mstatus_mpie <= 1'b1;
        else if(wb_csr_we && wb_des_csr == MSTATUS)   mstatus_mpie <= wb_csrwdata[7];
        if(rst)                                       mstatus_mie  <= 1'b0;
        else if(wb_ecall & wb_valid)                  mstatus_mie  <= 1'b0;
        else if(wb_mret & wb_valid)                   mstatus_mie  <= mstatus_mpie; // 1'b1;
        else if(wb_csr_we && wb_des_csr == MSTATUS)   mstatus_mie  <= wb_csrwdata[3];

        if(rst) begin
                                                      csr_mepc   <= 64'b0;
                                                      csr_mcause <= 64'b0;
        end else if(wb_ecall) begin 
                                                      csr_mepc   <= {32'b0,wb_pc};//?
                                                      csr_mcause <= 11;
        end else if(wb_csr_we && wb_des_csr == MEPC)  csr_mepc <= wb_csrwdata;
        else if(wb_csr_we && wb_des_csr == MCAUSE)    csr_mcause <= wb_csrwdata;

        if(rst) begin
                                                      csr_mtvec    <= 64'b0;
                                                      csr_mie      <= 64'b0;
                                                      csr_mip      <= 64'b0;
                                                      csr_mscratch <= 64'b0;
                                                      csr_mhartid  <= 64'b0;
        end else if(wb_csr_we && wb_des_csr == MTVEC) csr_mtvec    <= wb_csrwdata;
        else if(wb_csr_we && wb_des_csr == MIE)       csr_mie      <= wb_csrwdata;
        else if(wb_csr_we && wb_des_csr == MIP)       csr_mip      <= wb_csrwdata;
        else if(wb_csr_we && wb_des_csr == MSCRATCH)  csr_mscratch <= wb_csrwdata;
        else if(wb_csr_we && wb_des_csr == MHARTID)   csr_mhartid  <= wb_csrwdata;
    end

    reg  [`MEM_TO_WB_WIDTH-1:0] mem_to_wb_bus_reg;
    wire                        non_zerow;
    assign non_zerow = (|wb_rd);
    assign rf[0] = 64'b0;
    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    initial set_gpr_ptr(rf);

    wire   wb_ready_go;
    assign wb_ready_go = 1'b1;
    assign wb_allowin  = !wb_valid || wb_ready_go;
    assign { 
        wb_instruction,
        wb_mmio,
        wb_timer_int,
        wb_ebreak,          //      321
        wb_memwrite,        //      320
        wb_diff_data,       // [319:256]
        wb_diff_addr,       // [255:192]
        wb_des_csr,         // [191:180]
        wb_alu_input1,      // [179:116]
        wb_rs1,             // [115:111]
        wb_csr_we,          //      110
        wb_mret,            //      109
        wb_ecall,           //      108
        wb_csrrw,           //      107
        wb_csrrs,           //      106
        wb_csrrc,           //      105
        wb_csrrwi,          //      104
        wb_csrrsi,          //      103
        wb_csrrci,          //      102  
        wb_pc,              // [101: 70]        
        wb_reg_wen,         //       69
        wb_rd,              // [ 68: 64]
        wb_reg_wdata_tmp    // [ 63:  0]
    } = mem_to_wb_bus_reg;

    always @(posedge clk) begin
        if(rst)             wb_valid    <= 1'b0;     
        else if(wb_allowin) wb_valid    <= mem_to_wb_valid && !mem_flush;
                                      
        if(rst) begin
            mem_to_wb_bus_reg           <= 'd0;
        end else if(mem_to_wb_valid && wb_allowin) begin
            mem_to_wb_bus_reg           <= mem_to_wb_bus;
        end else begin
            mem_to_wb_bus_reg[69:64]    <= 6'b0;
        end//else mem_to_wb_bus_reg[69:0] <= 70'b0;
        wb_flush                        <= mem_flush;
    end
    assign wb_reg_wdata = wb_csr_we ? wb_csrrdata : wb_reg_wdata_tmp;

    always @(posedge clk) begin
        
        // integer i;
        // if(rst) begin 
        //   for(i=0;i<32;i=i+1)
        //     rf[i] <= 64'b0;
        if (wb_reg_wen && (|wb_rd) && !wb_flush) begin
            rf[wb_rd] <= wb_reg_wdata;
        end 
    end

    always @(posedge clk) begin
        if(rst) csr_mcycle  <= 0;
        else    csr_mcycle  <= csr_mcycle + 1;
    end

endmodule
