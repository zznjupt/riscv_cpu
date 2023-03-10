`define EX_TO_MEM_WIDTH 296
`define MEM_TO_WB_WIDTH 356

module ysyx_22050243_mem(
    input  wire clk,
    input  wire rst,
    output wire                             mem_allowin,     //for last stage
    input  wire                             wb_allowin,      //from next stage
    input  wire                             ex_to_mem_valid, //from last stage
    output wire                             mem_to_wb_valid, //for next stage
    input  wire [`EX_TO_MEM_WIDTH - 1:0]    ex_to_mem_bus,
    input  wire                             ex_mmio,
    output wire [`MEM_TO_WB_WIDTH - 1:0]    mem_to_wb_bus,

    output wire [63:0]                      mem_alu_output,
    output wire [63:0]                      mem_final_rdata,
    output wire                             mem_memread,
    input  wire                             ex_flush,
    input  wire                             ex_ready_go,
    output wire [2:0]                       ex_memop,//input from id
    output wire [7:0]                       ex_wmask,
    output reg                              mem_flush,
    input  wire [63:0]                      mem_doubly_aligned_data,
    input  wire [63:0]                      mem_diff_addr,
    input  wire [63:0]                      mem_diff_data,
    output wire                             mem_ecall,
    output wire [31:0]                      mem_pc,
    input  wire [2:0]                       cache_state
);

    wire          mem_memwrite;
    wire [2:0]    mem_memop;   //input from id
    wire [63:0]   mem_reg_wdata;
    wire          mem_mret;
    wire          mem_mmio;
    //wire[63:0]mem_diff_addr;
    //wire[63:0]mem_diff_data;
    reg           lb;
    reg           lh;
    reg           lw;
    reg           ld;
    reg           lbu;
    reg           lhu;
    reg           lwu;
    reg           sh;
    reg           sw;
    reg           sd;
    // for pipeline
    wire          mem_ready_go; // self_willing
    wire          mem_reg_wen;
    wire [4:0]    mem_rs1;
    wire [63:0]   mem_alu_input1;
    wire [11:0]   mem_des_csr;
    wire [4:0]    mem_rd;    
    wire          mem_jalr;
    wire [63:0]   mem_wdata_tmp;
    wire [63:0]   mem_wdata;
    reg  [63:0]   mem_reg_wdata;
    reg           mem_valid;

    wire          mem_csrrw;
    wire          mem_csrrs;
    wire          mem_csrrc;
    wire          mem_csrrwi;
    wire          mem_csrrsi;
    wire          mem_csrrci;
    wire          mem_csr_we;
    wire          mem_ebreak;
    wire          mem_timer_int;
    wire [31:0]   mem_instruction;

    wire ex_lb      = (ex_memop == 3'b000);
    wire ex_lh      = (ex_memop == 3'b001);
    wire ex_lw      = (ex_memop == 3'b010);
    wire ex_ld      = (ex_memop == 3'b011);
    wire ex_lbu     = (ex_memop == 3'b100);
    wire ex_lhu     = (ex_memop == 3'b101);
    wire ex_lwu     = (ex_memop == 3'b110);
    wire ex_sh      = (ex_memop[1:0] == 2'b01);
    wire ex_sw      = (ex_memop[1:0] == 2'b10);
    wire ex_sd      = (ex_memop[1:0] == 2'b11);
    assign ex_memop = ex_to_mem_bus[138:136];

    assign mem_ready_go = 1'b1;
    //this is actually ex_ready_go

    //stuck in ex stage so input won't change
    assign mem_allowin      = !mem_valid || mem_ready_go && wb_allowin;
    assign mem_to_wb_valid  = mem_ready_go && mem_valid;
    reg  [`EX_TO_MEM_WIDTH:0]  ex_to_mem_bus_reg; 

    assign { 
        mem_instruction,
        mem_mmio,
        mem_timer_int,
        mem_ebreak,     //      262
        mem_des_csr,    // [261:250]
        mem_alu_input1, // [249:186]
        mem_rs1,        // [185:181]
        mem_csr_we,     //      180
        mem_mret,       //      179
        mem_ecall,      //      178
        mem_csrrw,      //      177
        mem_csrrs,      //      176
        mem_csrrc,      //      175
        mem_csrrwi,     //      174
        mem_csrrsi,     //      173
        mem_csrrci,     //      172  
        mem_jalr,       //      171
        mem_pc,         // [170:139]
        mem_memop,      // [138:136] unused
        mem_reg_wen,    //      135  toreg
        mem_memwrite,   //      134
        mem_memread,    //      133
        mem_rd,         // [132:128] toreg
        mem_alu_output, // [127: 64]        
        mem_wdata_tmp   // [ 63:  0] fromid
    } = ex_to_mem_bus_reg;

    assign mem_to_wb_bus = { 
        mem_instruction,
        mem_mmio,
        mem_timer_int,
        mem_ebreak,      //      321
        mem_memwrite,    //      320
        mem_diff_data,   // [319:256]
        mem_diff_addr,   // [255:192]
        mem_des_csr,     // [191:180]
        mem_alu_input1,  // [179:116]
        mem_rs1,         // [115:111]
        mem_csr_we,      //      110
        mem_mret,        //      109
        mem_ecall,       //      108
        mem_csrrw,       //      107
        mem_csrrs,       //      106
        mem_csrrc,       //      105
        mem_csrrwi,      //      104
        mem_csrrsi,      //      103
        mem_csrrci,      //      102  
        mem_pc,          // [101: 70]        
        mem_reg_wen,     //       69
        mem_rd,          // [ 68: 64]
        mem_reg_wdata    // [ 63:  0]
    };   

    always @(*) begin
        //if(mem_jalr) mem_reg_wdata = {32'b0, mem_pc + 4};//id(the jalr need break down)
        if(mem_memread) mem_reg_wdata   = mem_final_rdata;
        else            mem_reg_wdata   = mem_alu_output;
    end

    always @(posedge clk) begin
        if(rst) begin
            mem_valid                   <= 1'b0;      
        end else if(mem_allowin) begin
            mem_valid                   <= ex_to_mem_valid;
        end

        if(rst) begin
            ex_to_mem_bus_reg           <= 'd0;
        end else if(ex_to_mem_valid && mem_allowin) begin
            ex_to_mem_bus_reg[263:0]    <= ex_to_mem_bus[263:0];
            ex_to_mem_bus_reg[264]      <= ex_mmio;
            ex_to_mem_bus_reg[296:265]  <= ex_to_mem_bus[295:264];
            mem_flush                   <= mem_mret | mem_ecall | ex_flush;
        end else if(ex_ready_go) begin
            ex_to_mem_bus_reg[179:179]  <= 1'b0;
            ex_to_mem_bus_reg[135:128]  <= 8'b0;
        end
    end

    reg  [63:0] rawdata;//after mask
    wire [7:0]  ex_addr_lowmask;
    reg  [7:0]  mem_addr_lowmask;
    wire [1:0]  ex_size;
    always @(posedge clk) begin
        lb <= ex_lb;
        lh <= ex_lh;
        lw <= ex_lw;
        ld <= ex_ld;

        lbu <= ex_lbu;
        lhu <= ex_lhu;
        lwu <= ex_lwu;

        mem_addr_lowmask <= ex_addr_lowmask;
    end

    ysyx_22050243_decoder38 decoder_mem ( // in: mem_raddr
        .in     (ex_to_mem_bus[66:64]),
        .out    (ex_addr_lowmask)
    );
    
    assign mem_final_rdata[7:0]     = rawdata[7:0]; // alu_output
    assign mem_final_rdata[15:8]    = {8{lb}} & {8{rawdata[7]}} |
                                      {8{lh | lhu}} & rawdata[15:8] | {8{lw | lwu | ld}}  & rawdata[15:8];
    assign mem_final_rdata[31:16]   = {16{lb}} & {16{rawdata[7]}}  |
                                      {16{lh}} & {16{rawdata[15]}} | {16{lw | lwu | ld}} & rawdata[31:16];
    assign mem_final_rdata[63:32]   = {32{lb}} & {32{rawdata[7]}}  |
                                      {32{lh}} & {32{rawdata[15]}} | {32{lw}} & {32{rawdata[31]}} |
                                      {32{ld}} & rawdata[63:32]; 
    //always @(posedge clk) begin
    assign rawdata      = ld ? mem_doubly_aligned_data :
        (mem_addr_lowmask[3'b000] & (lw | lwu)) ? {32'b0, mem_doubly_aligned_data[31:0]}  :
        (mem_addr_lowmask[3'b100] & (lw | lwu)) ? {32'b0, mem_doubly_aligned_data[63:32]} :

        (mem_addr_lowmask[3'b000] & (lh | lhu)) ? {48'b0, mem_doubly_aligned_data[15:0]}  :
        (mem_addr_lowmask[3'b010] & (lh | lhu)) ? {48'b0, mem_doubly_aligned_data[31:16]} :
        (mem_addr_lowmask[3'b100] & (lh | lhu)) ? {48'b0, mem_doubly_aligned_data[47:32]} :
        (mem_addr_lowmask[3'b110] & (lh | lhu)) ? {48'b0, mem_doubly_aligned_data[63:48]} :

        (mem_addr_lowmask[3'b000] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[7:0]}   :
        (mem_addr_lowmask[3'b001] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[15:8]}  :
        (mem_addr_lowmask[3'b010] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[23:16]} :
        (mem_addr_lowmask[3'b011] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[31:24]} :
        (mem_addr_lowmask[3'b100] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[39:32]} :
        (mem_addr_lowmask[3'b101] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[47:40]} :
        (mem_addr_lowmask[3'b110] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[55:48]} :
        (mem_addr_lowmask[3'b111] & (lb | lbu)) ? {56'b0, mem_doubly_aligned_data[63:56]} : 64'b0;
    
    assign ex_wmask[0]  = ex_addr_lowmask[3'b000] | ex_sd;
    assign ex_wmask[1]  = ex_addr_lowmask[3'b001] | ex_addr_lowmask[3'b000] & (ex_sh|ex_sw) | ex_sd;
    assign ex_wmask[2]  = ex_addr_lowmask[3'b010] | ex_addr_lowmask[3'b000] & ex_sw | ex_sd;
    assign ex_wmask[3]  = ex_addr_lowmask[3'b011] | ex_addr_lowmask[3'b010] & ex_sh |
                          ex_addr_lowmask[3'b000] & ex_sw | ex_sd;
    assign ex_wmask[4]  = ex_addr_lowmask[3'b100] | ex_sd;
    assign ex_wmask[5]  = ex_addr_lowmask[3'b101] | ex_addr_lowmask[3'b100] & (ex_sh|ex_sw) | ex_sd;
    assign ex_wmask[6]  = ex_addr_lowmask[3'b110] | ex_addr_lowmask[3'b100] & ex_sw | ex_sd;
    assign ex_wmask[7]  = ex_addr_lowmask[3'b111] | ex_addr_lowmask[3'b110] & ex_sh | 
                          ex_addr_lowmask[3'b100] & ex_sw | ex_sd;

    // import "DPI-C" function void pmem_read (input longint raddr, output longint doubly_aligned_data); // memread isn't working
    // import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
    // /* verilator lint_off LATCH */
    // always @(*) begin // sim so not use posedge clock
    //   if(mem_memread)  pmem_read(mem_alu_output, mem_doubly_aligned_data);
    //   if(mem_memwrite) pmem_write(mem_alu_output, mem_wdata, ex_wmask);//waddr
    //   /* verilator lint_on LATCH */
    // end
  
endmodule
