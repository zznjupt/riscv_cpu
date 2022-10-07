module ysyx_22050243_id (
    input  wire             clk,
    input  wire             rst,
    input  wire [5:0]       stall,
    output wire             stall_req_for_load,

    input  wire [6:0]       ex_2_id_for_stall_load,
    input  wire [128:0]     if_2_id_bus, // if_2_id
    input  wire [31:0]      isram_rdata,
    // ex, mem, wb 2 regfile
    input  wire [69:0]      ex_2_gpr_bus,  // 1+5+64
    input  wire [69:0]      mem_2_gpr_bus, // 1+5+64
    input  wire [69:0]      wb_2_gpr_bus,  // 1+5+64

    output wire [365:0]     id_2_ex_bus,
    output wire [63:0]      gpr_o[31:0]
);
    wire                    ce;
    wire [63:0]             id_pc;
    wire [63:0]             next_pc;

    wire        ex_gpr_w_e,   mem_gpr_w_e,   wb_gpr_w_e;
    wire [4:0]  ex_gpr_waddr, mem_gpr_waddr, wb_gpr_waddr;               
    wire [63:0] ex_gpr_wdata, mem_gpr_wdata, wb_gpr_wdata;

    assign     {ce, id_pc,  next_pc}                       = if_2_id_bus;
    assign     {ex_gpr_w_e,  ex_gpr_waddr,  ex_gpr_wdata}  = ex_2_gpr_bus;
    assign     {mem_gpr_w_e, mem_gpr_waddr, mem_gpr_wdata} = mem_2_gpr_bus;
    assign     {wb_gpr_w_e,  wb_gpr_waddr,  wb_gpr_wdata}  = wb_2_gpr_bus;
    // regslide
    reg                     flag;
    reg  [31:0]             buf_inst;
    reg                     buf_ce;
    reg  [63:0]             buf_id_pc;
    reg  [63:0]             buf_next_pc;

    always @(posedge clk) begin
        if(rst) begin
            buf_inst    <= 32'b0;
            buf_ce      <= 1'b0;
            buf_id_pc   <= 64'b0;
            buf_next_pc <= 64'b0; 
            flag        <= 1'b0;
        end
        else if(stall[3]) begin end     // keep TODO
        else if(stall[2] == 1'b1) begin
            buf_inst    <= 32'b0;
            buf_ce      <= 1'b0;
            buf_id_pc   <= 64'b0;
            buf_next_pc <= 64'b0;
            flag        <= 1'b0;
        end
        else if(stall[0]) flag <= 1'b0; // ex_stall
        else if(stall[1]) flag <= 1'b1; // load_stall
        else if(stall[5] == 1'b0) begin
            buf_inst    <= isram_rdata;
            buf_ce      <= ce;
            buf_id_pc   <= id_pc;
            buf_next_pc <= next_pc;
            flag        <= 1'b0;
        end
        else begin
            buf_inst    <= isram_rdata;
            buf_ce      <= ce;
            buf_id_pc   <= id_pc;
            buf_next_pc <= next_pc;
            flag        <= 1'b0; 
        end
    end

    wire        ce_i      =        buf_ce             ;
    wire [31:0] inst_i    = ce_i ? buf_inst    : 32'b0;
    wire [63:0] id_pc_i   = ce_i ? buf_id_pc   : 64'b0; 
    wire [63:0] next_pc_i = ce_i ? buf_next_pc : 64'b0;

    wire [6:0] opcode;
    wire [4:0] rd;
    wire [2:0] funct3;
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire [6:0] funct7;

    wire [63:0] rs1_data, rs2_data;

    assign opcode = inst_i[6:0];
    assign rd     = inst_i[11:7];
    assign funct3 = inst_i[14:12];
    assign rs1    = inst_i[19:15];
    assign rs2    = inst_i[24:20];
    assign funct7 = inst_i[31:25];

    ysyx_22050243_gpr gpr (
        .clk   (clk),        .rst    (rst),          .stall  (stall),
        .w_e   (wb_gpr_w_e), .waddr  (wb_gpr_waddr), .wdata  (wb_gpr_wdata),
        .r1_e  (1'b1),       .raddr1 (rs1),          .rdata1 (rs1_data),
        .r2_e  (1'b1),       .raddr2 (rs2),          .rdata2 (rs2_data),
        .gpr_o (gpr_o)
    );

    wire [4:0]  gpr_waddr;
    wire [63:0] gpr_rdata1, gpr_rdata2;
    assign gpr_waddr  = rd;
    assign gpr_rdata1 = (ex_gpr_w_e  & (ex_gpr_waddr  == rs1)) ? ex_gpr_wdata  :
                        (mem_gpr_w_e & (mem_gpr_waddr == rs1)) ? mem_gpr_wdata :
                        (wb_gpr_w_e  & (wb_gpr_waddr  == rs1)) ? wb_gpr_wdata  :
                                                                rs1_data       ;
    assign gpr_rdata2 = (ex_gpr_w_e  & (ex_gpr_waddr  == rs2)) ? ex_gpr_wdata  :
                        (mem_gpr_w_e & (mem_gpr_waddr == rs2)) ? mem_gpr_wdata :
                        (wb_gpr_w_e  & (wb_gpr_waddr  == rs2)) ? wb_gpr_wdata  :
                                                                rs2_data       ;
    wire [127:0] op_d, funct7_d;
    wire [7:0]         funct3_d;
    ysyx_22050243_decoder7_128 decoder_opcode (.in(opcode), .out(op_d));
    ysyx_22050243_decoder7_128 decoder_funct7 (.in(funct7), .out(funct7_d));
    ysyx_22050243_decoder3_8   decoder_funct3 (.in(funct3), .out(funct3_d));
    // ******************* inst implement ********************************
    // ALU
    wire   inst_lui,      inst_auipc;
    wire   inst_addi,     inst_add;
    wire   inst_addiw,    inst_addw;
    wire   inst_sub,      inst_subw;
    wire   inst_slti,     inst_sltiu;
    wire   inst_slt,      inst_sltu;
    wire   inst_slli,     inst_srli,      inst_srai;
    wire   inst_slliw,    inst_srliw,     inst_sraiw;     
    wire   inst_sll,      inst_srl,       inst_sra;
    wire   inst_sllw,     inst_srlw,      inst_sraw;
    wire   inst_xori,     inst_ori,       inst_andi;
    wire   inst_xor,      inst_or,        inst_and;
    assign inst_lui     =   op_d[7'b0110_111];
    assign inst_auipc   =   op_d[7'b0010_111];
    assign inst_addi    =   op_d[7'b0010_011] & funct3_d[3'b000];
    assign inst_addiw   =   op_d[7'b0011_011] & funct3_d[3'b000];
    assign inst_add     =   op_d[7'b0110_011] & funct3_d[3'b000] & funct7_d[7'b0000_000];
    assign inst_addw    =   op_d[7'b0111_011] & funct3_d[3'b000] & funct7_d[7'b0000_000];
    assign inst_sub     =   op_d[7'b0110_011] & funct3_d[3'b000] & funct7_d[7'b0100_000];
    assign inst_subw    =   op_d[7'b0111_011] & funct3_d[3'b000] & funct7_d[7'b0100_000];
    assign inst_slti    =   op_d[7'b0010_011] & funct3_d[3'b010];
    assign inst_sltiu   =   op_d[7'b0010_011] & funct3_d[3'b011];
    // special-I 
    // imm[5:0] = shamt
    assign inst_slli    =   op_d[7'b0010_011] & funct3_d[3'b001] & ~inst_i[30];
    assign inst_srli    =   op_d[7'b0010_011] & funct3_d[3'b101] & ~inst_i[30];
    assign inst_srai    =   op_d[7'b0010_011] & funct3_d[3'b101] &  inst_i[30];
    // imm[4:0] = shamt
    assign inst_slliw   =   op_d[7'b0011_011] & funct3_d[3'b001] & ~inst_i[30];
    assign inst_srliw   =   op_d[7'b0011_011] & funct3_d[3'b101] & ~inst_i[30];
    assign inst_sraiw   =   op_d[7'b0011_011] & funct3_d[3'b101] &  inst_i[30];

    assign inst_sll     =   op_d[7'b0110_011] & funct3_d[3'b001] & funct7_d[7'b0000_000];
    assign inst_sllw    =   op_d[7'b0111_011] & funct3_d[3'b001] & funct7_d[7'b0000_000];
    assign inst_slt     =   op_d[7'b0110_011] & funct3_d[3'b010] & funct7_d[7'b0000_000];
    assign inst_sltu    =   op_d[7'b0110_011] & funct3_d[3'b011] & funct7_d[7'b0000_000];
    assign inst_srl     =   op_d[7'b0110_011] & funct3_d[3'b101] & funct7_d[7'b0000_000];
    assign inst_srlw    =   op_d[7'b0111_011] & funct3_d[3'b101] & funct7_d[7'b0000_000];
    assign inst_sra     =   op_d[7'b0110_011] & funct3_d[3'b101] & funct7_d[7'b0100_000];
    assign inst_sraw    =   op_d[7'b0111_011] & funct3_d[3'b101] & funct7_d[7'b0100_000];
    assign inst_xori    =   op_d[7'b0010_011] & funct3_d[3'b100];
    assign inst_ori     =   op_d[7'b0010_011] & funct3_d[3'b110];
    assign inst_andi    =   op_d[7'b0010_011] & funct3_d[3'b111]; 
    assign inst_xor     =   op_d[7'b0110_011] & funct3_d[3'b100] & funct7_d[7'b0000_000];
    assign inst_or      =   op_d[7'b0110_011] & funct3_d[3'b110] & funct7_d[7'b0000_000];
    assign inst_and     =   op_d[7'b0110_011] & funct3_d[3'b111] & funct7_d[7'b0000_000];
    // special inst
    // wire inst_fence,    inst_fence_i;  cache coherence and memory consistency
    wire   inst_ecall;
    wire   inst_ebreak; 
    assign inst_ecall   =   op_d[7'b1110_011] & funct3_d[3'b000] & ~inst_i[20];
    assign inst_ebreak  =   op_d[7'b1110_011] & funct3_d[3'b000] &  inst_i[20]; 
    // LSU
    wire   inst_lb,   inst_lh,    inst_lw,    inst_ld;
    wire   inst_lbu,  inst_lhu,   inst_lwu;
    wire   inst_sb,   inst_sh,    inst_sw,    inst_sd;
    assign inst_lb      =   op_d[7'b0000_011] & funct3_d[3'b000];
    assign inst_lh      =   op_d[7'b0000_011] & funct3_d[3'b001];
    assign inst_lw      =   op_d[7'b0000_011] & funct3_d[3'b010];
    assign inst_lwu     =   op_d[7'b0000_011] & funct3_d[3'b110];
    assign inst_lbu     =   op_d[7'b0000_011] & funct3_d[3'b100];
    assign inst_lhu     =   op_d[7'b0000_011] & funct3_d[3'b101];
    assign inst_ld      =   op_d[7'b0000_011] & funct3_d[3'b011];
    assign inst_sb      =   op_d[7'b0100_011] & funct3_d[3'b000];
    assign inst_sh      =   op_d[7'b0100_011] & funct3_d[3'b001];
    assign inst_sw      =   op_d[7'b0100_011] & funct3_d[3'b010];
    assign inst_sd      =   op_d[7'b0100_011] & funct3_d[3'b011];
    // BRU
    wire   inst_jal,  inst_jalr;
    wire   inst_beq,  inst_bne,   inst_blt,   inst_bge,   inst_bltu,  inst_bgeu;
    assign inst_jal     =   op_d[7'b1101_111];
    assign inst_jalr    =   op_d[7'b1100_111] & funct3_d[3'b000];
    assign inst_beq     =   op_d[7'b1100_011] & funct3_d[3'b000];
    assign inst_bne     =   op_d[7'b1100_011] & funct3_d[3'b001];
    assign inst_blt     =   op_d[7'b1100_011] & funct3_d[3'b100];
    assign inst_bge     =   op_d[7'b1100_011] & funct3_d[3'b101];
    assign inst_bltu    =   op_d[7'b1100_011] & funct3_d[3'b110];
    assign inst_bgeu    =   op_d[7'b1100_011] & funct3_d[3'b111];
    // CSR
    wire   inst_csrrw, inst_csrrs, inst_csrrc, inst_csrrwi, inst_csrrsi, inst_csrrci;
    assign inst_csrrw   =   op_d[7'b1110_011] & funct3_d[3'b001];
    assign inst_csrrs   =   op_d[7'b1110_011] & funct3_d[3'b010];
    assign inst_csrrc   =   op_d[7'b1110_011] & funct3_d[3'b011];
    assign inst_csrrwi  =   op_d[7'b1110_011] & funct3_d[3'b101];
    assign inst_csrrsi  =   op_d[7'b1110_011] & funct3_d[3'b110];
    assign inst_csrrci  =   op_d[7'b1110_011] & funct3_d[3'b111];
    // MUL
    wire   inst_mul,  inst_mulh,  inst_mulhsu,    inst_mulhu;
    wire   inst_mulw;
    assign inst_mul     =   op_d[7'b0110_011] & funct3_d[3'b000] & funct7_d[7'b0000_001];
    assign inst_mulh    =   op_d[7'b0110_011] & funct3_d[3'b001] & funct7_d[7'b0000_001];
    assign inst_mulhsu  =   op_d[7'b0110_011] & funct3_d[3'b010] & funct7_d[7'b0000_001];
    assign inst_mulhu   =   op_d[7'b0110_011] & funct3_d[3'b011] & funct7_d[7'b0000_001];
    assign inst_mulw    =   op_d[7'b0111_011] & funct3_d[3'b000] & funct7_d[7'b0000_001];
    // DIV
    wire   inst_div,  inst_divu,  inst_divw,  inst_divuw;
    wire   inst_remw, inst_remuw, inst_rem,   inst_remu;
    assign inst_div     =   op_d[7'b0110_011] & funct3_d[3'b100] & funct7_d[7'b0000_001];
    assign inst_divu    =   op_d[7'b0110_011] & funct3_d[3'b101] & funct7_d[7'b0000_001];
    assign inst_divw    =   op_d[7'b0111_011] & funct3_d[3'b100] & funct7_d[7'b0000_001];
    assign inst_divuw   =   op_d[7'b0111_011] & funct3_d[3'b101] & funct7_d[7'b0000_001];
    assign inst_rem     =   op_d[7'b0110_011] & funct3_d[3'b110] & funct7_d[7'b0000_001];
    assign inst_remu    =   op_d[7'b0110_011] & funct3_d[3'b111] & funct7_d[7'b0000_001];
    assign inst_remw    =   op_d[7'b0111_011] & funct3_d[3'b110] & funct7_d[7'b0000_001];
    assign inst_remuw   =   op_d[7'b0111_011] & funct3_d[3'b111] & funct7_d[7'b0000_001];

    // ************************ op implement ***********************************
    wire [2:0]  sel_alu_src1; // alu src1 classification
    // rs1 to src1
    assign sel_alu_src1[0]  = inst_addi  |  inst_addiw   |   inst_add    |   inst_addw   
                            | inst_sub   |  inst_subw    |   inst_slti   |   inst_sltiu
                            | inst_slli  |  inst_srli    |   inst_srai   |   inst_slliw
                            | inst_srliw |  inst_sraiw   |   inst_sll    |   inst_sllw
                            | inst_slt   |  inst_sltu    |   inst_srl    |   inst_srlw
                            | inst_sra   |  inst_sraw    |   inst_xori   |   inst_ori
                            | inst_andi  |  inst_xor     |   inst_or     |   inst_and
                            | inst_lb    |  inst_lh      |   inst_lw     |   inst_lwu
                            | inst_lbu   |  inst_lhu     |   inst_ld     |   inst_sb
                            | inst_sh    |  inst_sw      |   inst_sd; 
    // pc to src1
    assign sel_alu_src1[1]  = inst_auipc |  inst_jal     |   inst_jalr;
    // nop
    assign sel_alu_src1[2]  = inst_lui;

    wire [6:0]  sel_alu_src2; // alu src2 classification  
    //rs2 to src2
    assign sel_alu_src2[0]  = inst_add   |   inst_addw   |  inst_sub    |   inst_subw  
                            | inst_sll   |   inst_slt    |  inst_sltu
                            | inst_srl   |   inst_sra
                            | inst_xor   |   inst_or     |  inst_and;
    // imm_sign_extend to src2 I-type
    assign sel_alu_src2[1]  = inst_addi  |   inst_addiw  |  inst_slti   |   inst_sltiu
                            | inst_xori  |   inst_ori    |  inst_andi   |   inst_lb
                            | inst_lh    |   inst_lw     |  inst_ld     |   inst_lbu   |   inst_lhu    |  inst_lwu;
    // imm_sign_extend to src2 U-type
    assign sel_alu_src2[2]  = inst_lui   |   inst_auipc;
    // shamt to src2
    assign sel_alu_src2[3]  = inst_slli  |   inst_srli   |   inst_srai   
                            | inst_slliw |   inst_srliw  |   inst_sraiw;  
    // src2 = 4
    assign sel_alu_src2[4]  = inst_jal   |   inst_jalr;  
    // imm_sign_extend to src2 S-type
    assign sel_alu_src2[5]  = inst_sb    |   inst_sw     |   inst_sh    |   inst_sd;    
    // zero_extend(rs2[4:0])
    assign sel_alu_src2[6]  = inst_sllw  |   inst_srlw   |  inst_sraw;

    wire [11:0] alu_op;
    wire [1:0]  sp_bus;
    wire        op_add,     op_sub,     op_slt,     op_sltu;
    wire        op_and,     op_or,      op_xor;     //op_nor
    wire        op_sll,     op_srl,     op_sra;
    wire        op_nop;
    wire        op_sp;
    assign op_add   =   inst_add    |   inst_addw   |   inst_addi   |   inst_addiw  
                    |   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                    |   inst_lbu    |   inst_lhu    |   inst_lwu    |   inst_sb
                    |   inst_sh     |   inst_sw     |   inst_sd     |   inst_auipc
                    |   inst_jal    |   inst_jalr;
    assign op_sub   =   inst_sub    |   inst_subw;  
    assign op_slt   =   inst_slt    |   inst_slti;
    assign op_sltu  =   inst_sltu   |   inst_sltiu;
    assign op_sll   =   inst_sll    |   inst_slli   |   inst_slliw  |   inst_sllw;
    assign op_srl   =   inst_srl    |   inst_srli   |   inst_srliw  |   inst_srlw;
    assign op_sra   =   inst_sra    |   inst_srai   |   inst_sraiw  |   inst_sraw;
    assign op_and   =   inst_and    |   inst_andi   |   inst_csrrc  |   inst_csrrci;
    assign op_or    =   inst_or     |   inst_ori    |   inst_csrrs  |   inst_csrrsi;
    assign op_xor   =   inst_xor    |   inst_xori;
    assign op_nop   =   inst_lui    |   inst_csrrw  |   inst_csrrwi;
    assign op_sp    =   inst_ecall  |   inst_ebreak;
    assign alu_op = {   
                op_add,     op_sub,     op_slt,     op_sltu,
                op_and,     op_or,      op_xor,
                op_sll,     op_srl,     op_sra,
                op_nop,     
                op_sp   
    };
    wire [10:0] mem_op;       
    assign      mem_op = {   
                inst_lb,    inst_lh,    inst_lw,        inst_ld,
                inst_lbu,   inst_lhu,   inst_lwu,
                inst_sb,    inst_sh,    inst_sw,        inst_sd 
    };    
    
    wire [7:0]  bru_op;
    assign      bru_op = {   
                inst_jal,   inst_jalr,  inst_beq,   inst_bne,   inst_blt,
                inst_bge,   inst_bltu,  inst_bgeu   
    };
    wire [5:0]  csr_op;
    assign      csr_op = {   
                inst_csrrw,  inst_csrrs,  inst_csrrc,     
                inst_csrrwi, inst_csrrsi, inst_csrrci 
    };
    wire [4:0]  mul_op; 
    assign      mul_op = {   inst_mul,   inst_mulh,  inst_mulhsu,   inst_mulhu, inst_mulw };
    wire [3:0]  div_op;
    wire [3:0]  rem_op;
    assign      div_op = {   inst_div,   inst_divu,  inst_divw, inst_divuw  };
    assign      rem_op = {   inst_rem,   inst_remu,  inst_remw, inst_remuw  };

    wire    lsu_8, lsu_16, lsu_32, lsu_64, mul_32, div_32, alu_32;
    assign  lsu_8   =   inst_lb     |   inst_lbu    |   inst_sb;
    assign  lsu_16  =   inst_lh     |   inst_lhu    |   inst_sh;    
    assign  lsu_32  =   inst_lw     |   inst_lwu    |   inst_sw;
    assign  mul_32  =   inst_mulw;
    assign  div_32  =   inst_divw   |   inst_divuw  |   inst_remw   |   inst_remuw;
    assign  alu_32  =   inst_addiw  |   inst_addw   |   inst_subw   |   inst_slliw
                    |   inst_srliw  |   inst_sraiw  |   inst_sllw   |   inst_srlw
                    |   inst_sraw;
    assign  lsu_64  =   inst_sd     |   inst_ld;
    // data ram load and store enable
    wire    dram_e;
    assign  dram_e    =   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                      |   inst_lbu    |   inst_lhu    |   inst_lwu
                      |   inst_sb     |   inst_sh     |   inst_sw     |   inst_sd;  
    wire    dram_w_e;
    assign  dram_w_e  =   inst_sb     |   inst_sh     |   inst_sw     |   inst_sd;
    // gpr store enable
    wire    gpr_w_e;
    assign  gpr_w_e   =   inst_lui    |   inst_auipc  |   inst_jal    |   inst_jalr
                      |   inst_lb     |   inst_lh     |   inst_lw
                      |   inst_lbu    |   inst_lhu    |   inst_addi   |   inst_slti
                      |   inst_sltiu  |   inst_xori   |   inst_ori    |   inst_andi
                      |   inst_slli   |   inst_srli   |   inst_srai   |   inst_add
                      |   inst_sub    |   inst_sll    |   inst_slt    |   inst_sltu
                      |   inst_xor    |   inst_srl    |   inst_sra    |   inst_or
                      |   inst_and    |   inst_lwu    |   inst_ld     
                      |   inst_srli   |   inst_srai   |   inst_addiw  |   inst_slliw
                      |   inst_srliw  |   inst_sraiw  |   inst_addw   |   inst_subw
                      |   inst_sllw   |   inst_srlw   |   inst_sraw   |   inst_csrrw
                      |   inst_csrrs  |   inst_csrrc  |   inst_csrrwi |   inst_csrrsi
                      |   inst_csrrci |   inst_mul    |   inst_mulh   |   inst_mulhsu
                      |   inst_mulhu  |   inst_div    |   inst_divu   |   inst_rem
                      |   inst_remu   |   inst_mulw   |   inst_divw   |   inst_divuw 
                      |   inst_remw   |   inst_remuw;
    // 0 from alu_res ; 1 form ld_res 
    wire    sel_gpr_res;
    assign  sel_gpr_res =   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                        |   inst_lbu    |   inst_lhu    |   inst_lwu;

    wire [365:0] id_2_ex_bus_temp;
    assign id_2_ex_bus_temp = {
        bru_op, sp_bus, 
        lsu_8,        lsu_16,      lsu_32,      lsu_64,
        mul_32,       div_32,      alu_32,
        mem_op,       mul_op,      rem_op,      div_op,      csr_op,   
        next_pc_i,    id_pc_i,     inst_i, 
        alu_op,
        sel_alu_src1, sel_alu_src2,
        dram_e,       dram_w_e,
        gpr_w_e,      gpr_waddr,
        sel_gpr_res,  gpr_rdata1,  gpr_rdata2
    };
    wire [4:0] ex_rd;
    wire       ex_dram_w_e;
    wire       ex_dram_e;
    assign    {ex_rd, ex_dram_w_e, ex_dram_e} = ex_2_id_for_stall_load;
    // ************************ output *********************************
    assign id_2_ex_bus = flag ? 366'b0 : id_2_ex_bus_temp;
    assign stall_req_for_load = (((ex_rd == rs1) | (ex_rd == rs2)) & ex_dram_e & ~ex_dram_w_e) ? 1'b1 : 1'b0;

endmodule
