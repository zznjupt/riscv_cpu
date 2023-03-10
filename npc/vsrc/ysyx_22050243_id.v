`define IF_TO_ID_WIDTH   64
`define ID_TO_EX_WIDTH  310

module ysyx_22050243_id (
    input  wire clk,
    input  wire rst,
    output wire                         id_allowin,    
    input  wire                         ex_allowin,     
    input  wire                         if_to_id_valid,
    output wire                         id_to_ex_valid,
    input  wire [`IF_TO_ID_WIDTH - 1:0] if_to_id_bus, 
    output wire [`ID_TO_EX_WIDTH - 1:0] id_to_ex_bus,
    
    input  wire                         if_timer_int,
    output wire [4:0]                   id_rs1,
    output wire [4:0]                   id_rs2,
    input  wire [63:0]                  id_regdata1_tmp, // regdata before hazard proceccing
    input  wire [63:0]                  id_regdata2_tmp,
    output wire [31:0]                  id_branch_result,
    output wire                         id_branch_taken,
    input  wire [4:0]                   ex_rd,
    input  wire [4:0]                   mem_rd,
    input  wire [4:0]                   wb_rd,
    input  wire [63:0]                  ex_alu_output,
    input  wire [63:0]                  mem_alu_output,
    input  wire [63:0]                  wb_reg_wdata,
    input  wire                         ex_memread,
    input  wire                         mem_memread,
    input  wire [63:0]                  mem_final_rdata,
    input  wire                         ex_reg_wen,
    input  wire                         mem_reg_wen,
    input  wire                         wb_reg_wen,
    input  wire                         mem_mret,
    input  wire                         ex_csr_we,
    input  wire                         mem_csr_we,
    input  wire                         wb_csr_we,
    input  wire [31:0]                  ex_pc,
    input  wire [31:0]                  mepc_low,
    input  wire                         preif_allowin,
    input  wire                         if_flush,
    input  wire [31:0]                  if_instruction_reg,
    input  reg                          if_instruction_blocked,
    output reg                          id_flush,
    output wire                         id_ecall,
    output wire                         id_mret,
    output wire                         load_branch,
    output reg                          ecallmret_on,
    input  wire                         ex_ecall,
    input  wire                         ex_mret,
    input  wire [31:0]                  mem_pc,
    input  wire                         mem_ecall,
    input  wire                         wb_ecall,
    input  wire                         wb_mret,
    input  wire [31:0]                  wb_pc,
    input  wire [2:0]                   icache_state // Icache
);
    localparam  TYPE_I = 3'b000, TYPE_U = 3'b001, TYPE_S = 3'b010,
                TYPE_J = 3'b011, TYPE_R = 3'b100, TYPE_B = 3'b101, 
                TYPE_N = 3'b110;
    wire        beq;
    wire        bne;
    wire        blt;
    wire        bltu;
    wire        bge;
    wire        bgeu;
    wire        btype_taken; 
    wire        imm_src1; // whether src1 is imm?
    wire        imm_src2; // whether src2 is imm?

    // output
    wire [5:0]  id_aluop;
    wire [2:0]  id_memop;
    wire [4:0]  id_rd;
    wire        id_reg_wen;
    wire        id_memwrite;
    wire        id_memread;
    reg  [2:0]  id_inst_type;
    reg  [63:0] id_imm;
    wire        id_jalr;
    wire [63:0] id_alu_input1;
    wire [63:0] id_alu_input2;
    wire [63:0] id_regdata1_final;
    wire [63:0] id_regdata2_final;
    wire [63:0] id_mem_wdata;
    wire        id_ebreak = (id_instruction[6:0] == 7'b1110011) & id_instruction[20] &
                            !( | {id_instruction[31:21], id_instruction[19:7]}); // ebreak

    // hazard
    wire        exid_raw_hazard1;
    wire        exid_raw_hazard2;
    wire        memid_raw_hazard1;
    wire        memid_raw_hazard2;
    wire        wbid_raw_hazard1;
    wire        wbid_raw_hazard2;
    wire        load_use_hazard1;
    wire        load_use_hazard2;
    reg         mem_load_use_hazard1_tmp;
    reg         mem_load_use_hazard2_tmp;
    wire        mem_load_use_hazard1;
    wire        mem_load_use_hazard2;

    reg         wb_load_use_hazard1_tmp;
    reg         wb_load_use_hazard2_tmp;
    wire        wb_load_use_hazard1;
    wire        wb_load_use_hazard2;

    assign exid_raw_hazard1     = ( | ex_rd)  && (ex_rd  == id_rs1) && ex_reg_wen  && (ex_pc  != id_pc);
    assign exid_raw_hazard2     = ( | ex_rd)  && (ex_rd  == id_rs2) && ex_reg_wen  && (ex_pc  != id_pc);
    assign memid_raw_hazard1    = ( | mem_rd) && (mem_rd == id_rs1) && mem_reg_wen && (mem_pc != id_pc);
    assign memid_raw_hazard2    = ( | mem_rd) && (mem_rd == id_rs2) && mem_reg_wen && (mem_pc != id_pc);
    assign wbid_raw_hazard1     = ( | wb_rd)  && (wb_rd  == id_rs1) && wb_reg_wen  && (wb_pc  != id_pc);
    assign wbid_raw_hazard2     = ( | wb_rd)  && (wb_rd  == id_rs2) && wb_reg_wen  && (wb_pc  != id_pc);
    assign load_use_hazard1     = exid_raw_hazard1 && ex_memread && ex_pc != id_pc;
    assign load_use_hazard2     = exid_raw_hazard2 && ex_memread && ex_pc != id_pc;
    assign mem_load_use_hazard1 = mem_load_use_hazard1_tmp | (memid_raw_hazard1 && mem_memread);
    assign mem_load_use_hazard2 = mem_load_use_hazard2_tmp | (memid_raw_hazard2 && mem_memread);
    assign wb_load_use_hazard1  = wb_load_use_hazard1_tmp;
    assign wb_load_use_hazard2  = wb_load_use_hazard2_tmp; 
    assign load_branch          = (load_use_hazard1     | load_use_hazard2 | 
                                   mem_load_use_hazard1 | mem_load_use_hazard2) & 
                                  (id_inst_type == TYPE_B || id_jalr || id_inst_type == TYPE_J);

    // for pipeline
    wire                            id_ready_go;
    reg                             id_valid;
    reg  [`IF_TO_ID_WIDTH - 1:0]    if_to_id_bus_reg; 

    wire [31:0]                     id_pc;
    wire [31:0]                     id_instruction;
    assign {
        id_instruction,     // [63:32]
        id_pc               // [31: 0]
    } = if_to_id_bus_reg;   // data from if delayed a cycle

    wire                            id_csrrw;
    wire                            id_csrrs;
    wire                            id_csrrc;
    wire                            id_csrrwi;
    wire                            id_csrrsi;
    wire                            id_csrrci;
    reg                             if_timer_int_reg;
    reg                             id_jalr_stuck;
    reg                             id_jalr_stuck_reg;
    reg  [31:0]                     stuck_jalr_result;
    wire                            timer_int;
    wire                            id_timer_int;
    wire                            id_fencei;

    assign id_fencei    = !( | id_instruction[31:15]) && id_instruction[14:7] == 8'b00100000 && (id_inst_type == TYPE_I);
    assign id_mret      = (id_instruction[31:7] == 25'b0011000000100000000000000) && (id_inst_type == TYPE_N);
    assign id_ecall     = !( | id_instruction[31:7]) && (id_inst_type == TYPE_N);
    assign id_csrrw     = id_instruction[14:12] == 3'b001 && (id_inst_type == TYPE_N);
    assign id_csrrs     = id_instruction[14:12] == 3'b010 && (id_inst_type == TYPE_N);
    assign id_csrrc     = id_instruction[14:12] == 3'b011 && (id_inst_type == TYPE_N);
    assign id_csrrwi    = id_instruction[14:12] == 3'b101 && (id_inst_type == TYPE_N);
    assign id_csrrsi    = id_instruction[14:12] == 3'b110 && (id_inst_type == TYPE_N);
    assign id_csrrci    = id_instruction[14:12] == 3'b111 && (id_inst_type == TYPE_N);
    assign id_timer_int = if_timer_int_reg | timer_int;

    assign id_to_ex_bus = {
        id_fencei,      //      309
        id_instruction, // [308:277]
        id_timer_int,   //      276
        id_ebreak,      //      275
        id_imm[11:0],   // [274:263]
        id_mret,        //      262
        id_ecall,       //      261
        id_csrrw,       //      260
        id_csrrs,       //      259
        id_csrrc,       //      258
        id_csrrwi,      //      257
        id_csrrsi,      //      256
        id_csrrci,      //      255
        id_pc,          // [254:223]
        id_aluop,       // [222:217]
        id_memop,       // [216:214]
        id_reg_wen,     //      213
        id_memwrite,    //      212
        id_memread,     //      211
        id_rd,          // [210:206]
        id_rs1,         // [205:201]
        id_rs2,         // [200:196]
        id_inst_type,   // [195:193]
        id_jalr,        //      192
        id_alu_input1,  // [191:128]
        id_alu_input2,  // [127: 64]
        id_mem_wdata    // [ 63:  0]
    };                  // data for ex

    assign id_memop             = id_instruction[14:12];
    assign id_aluop             = {id_instruction[30], id_instruction[25], id_instruction[6:5], id_instruction[4:3]};
    assign id_memwrite          = (id_inst_type == TYPE_S);//for mem

    assign beq                  = !( | id_instruction[14:12]); // in id only
    assign bne                  = !( | id_instruction[14:13]) & id_instruction[12];
    assign blt                  = id_instruction[14:12] == 3'b100;
    assign bltu                 = id_instruction[14:12] == 3'b110;
    assign bge                  = id_instruction[14:12] == 3'b101;
    assign bgeu                 = id_instruction[14:12] == 3'b111;

    assign id_rd                = id_instruction[11:7];
    assign id_rs1               = id_instruction[19:15];
    assign id_rs2               = id_instruction[24:20];

    assign imm_src1             = (id_inst_type == TYPE_U || id_inst_type == TYPE_J); // type_u, type_j
    assign imm_src2             = (id_inst_type == TYPE_I || id_inst_type == TYPE_S); // type_i
    assign id_alu_input1        = imm_src1 ? id_imm : id_regdata1_final;
    assign id_alu_input2        = imm_src2 ? id_imm : id_regdata2_final;
 
    assign id_regdata1_final    = exid_raw_hazard1    ? ex_alu_output  :
                                  wb_load_use_hazard1 ? wb_reg_wdata   :
                                  memid_raw_hazard1   ? mem_alu_output :
                                  wbid_raw_hazard1    ? wb_reg_wdata   : 
                                  id_regdata1_tmp;
    assign id_regdata2_final    = exid_raw_hazard2    ? ex_alu_output  :
                                  wb_load_use_hazard2 ? wb_reg_wdata   :
                                  memid_raw_hazard2   ? mem_alu_output :
                                  wbid_raw_hazard2    ? wb_reg_wdata   : 
                                  id_regdata2_tmp;
    assign id_mem_wdata         = id_regdata2_final;

    assign id_jalr              = id_instruction[6:0] == 7'b1100111 && id_instruction[14:12] == 3'b000;
    assign timer_int            = 0;
    assign id_branch_result     = id_jalr_stuck_reg ? stuck_jalr_result :
                                  ({32{btype_taken}} & (id_pc + id_imm[31:0]) |
                                  {32{id_jalr}} & 
                                  ((id_regdata1_final[31:0] + {{20{id_instruction[31]}}, id_instruction[31:20]}) & (~1)) |
                                  {32{id_inst_type == TYPE_J}} & 
                                  (id_pc + id_alu_input1[31:0])); // jal
    assign id_branch_taken      = btype_taken || id_jalr || (id_inst_type == TYPE_J);//Btaken, jal, jalr
    assign btype_taken          = id_inst_type == TYPE_B && (beq && id_regdata1_final == id_regdata2_final
                                  || bne  && (id_regdata1_final != id_regdata2_final)//for B_TYPE only
                                  || blt  && ($signed(id_regdata1_final) <  $signed(id_regdata2_final))
                                  || bltu && id_regdata1_final < id_regdata2_final
                                  || bge  && ($signed(id_regdata1_final) >= $signed(id_regdata2_final)) 
                                  || bgeu && id_regdata1_final >= id_regdata2_final);

    assign id_reg_wen           = !(|id_inst_type) || id_inst_type == TYPE_U || id_inst_type == TYPE_J || 
                                  id_inst_type == TYPE_R || id_inst_type == TYPE_N;
    assign id_memread           = id_instruction[0] & id_instruction[1] & !id_instruction[2] & 
                                  !id_instruction[3] & !id_instruction[4] & !id_instruction[5] & 
                                  !id_instruction[6];

    // pipeline 
    assign id_ready_go          = !(load_use_hazard1 || load_use_hazard2
                                  || mem_load_use_hazard1 || mem_load_use_hazard2 || ex_csr_we  
                                  && (|ex_rd)  && (ex_rd == id_rs1  || ex_rd == id_rs2) 
                                  || mem_csr_we && (|mem_rd) && (mem_rd == id_rs1 || mem_rd == id_rs2));//right?
    assign id_allowin           = !id_valid || id_ready_go && ex_allowin;//!id_valid is for the begining 
    assign id_to_ex_valid       = id_ready_go && id_valid;//all about id. Has nothing to do with ex


    always @(posedge clk) begin
    
        if(rst) begin
            id_jalr_stuck               <= 1'b0;
            id_jalr_stuck_reg           <= 1'b0;
            stuck_jalr_result           <= 0;
        end else if(!id_jalr_stuck & !preif_allowin & id_jalr & id_ready_go & (icache_state != 0)) begin
            id_jalr_stuck               <= 1'b1;
            id_jalr_stuck_reg           <= id_jalr_stuck;
            stuck_jalr_result           <= id_branch_result;
        end else if(preif_allowin & id_jalr) begin
            id_jalr_stuck <= 1'b0;
            id_jalr_stuck_reg           <= id_jalr_stuck;
        end else begin
            id_jalr_stuck_reg           <= id_jalr_stuck;
        end
     
        if(rst) begin
            id_valid <= 1'b0;      
        end else if(id_allowin) begin // the valid from last stage
            id_valid <= if_to_id_valid & (!id_branch_taken);
        end
        if(rst) begin
            mem_load_use_hazard1_tmp    <= 0;
            mem_load_use_hazard2_tmp    <= 0;
            wb_load_use_hazard1_tmp     <= 0;
            wb_load_use_hazard2_tmp     <= 0;
        end else begin
            mem_load_use_hazard1_tmp    <= load_use_hazard1;
            mem_load_use_hazard2_tmp    <= load_use_hazard2;
            wb_load_use_hazard1_tmp     <= mem_load_use_hazard1;
            wb_load_use_hazard1_tmp     <= mem_load_use_hazard1; 
            wb_load_use_hazard1_tmp     <= mem_load_use_hazard1;
            wb_load_use_hazard2_tmp     <= mem_load_use_hazard2;
        end

        if(rst) begin
            ecallmret_on                <= 0;
        end else if(wb_mret) begin
            ecallmret_on                <= 1;
        end else if(id_pc[31:0] == mepc_low) begin
            ecallmret_on                <= 0;
        end

        if(rst) begin
            if_to_id_bus_reg            <= 'd0;
            id_flush                    <= 0;     // otherwise stall
            if_timer_int_reg <= 0;
        end else if(if_to_id_valid && id_allowin) begin
            if(!if_instruction_blocked) begin
                if_to_id_bus_reg        <= if_to_id_bus;
            end
            else begin
                if_to_id_bus_reg[31:0]  <= if_to_id_bus[31:0];
                if_to_id_bus_reg[63:32] <= id_branch_taken ? 32'b0 : if_instruction_reg;
            end
            id_flush                    <= mem_ecall | mem_mret | if_flush;//otherwise stall
            if_timer_int_reg            <= if_timer_int;
        end
    end

    // number of keys, width of key/data (output input) 
    ysyx_22050243_MuxKeyWithDefault #(13, 7, 3) inst_mux (
        id_inst_type, id_instruction[6:0], TYPE_I, {
            7'b0010111, TYPE_U, // auipc
            7'b0110111, TYPE_U, // lui
            7'b0011011, TYPE_I, // addiw, sraiw, srliw, slliw
            7'b0010011, TYPE_I, // addi, andi, ori, xori, sltiu, srai, srli, slli(new)
            7'b0000011, TYPE_I, // lb, lh, lw, ld, lbu, lhu, lwu(src1+src2)
            7'b1100111, TYPE_I, // jalr
            7'b0001111, TYPE_I, // fencei
            7'b1101111, TYPE_J, // jal
            7'b0111011, TYPE_R, // addw, subw, mulw, sllw, srlw, sraw, divw, divuw, remw, remuw
            7'b0110011, TYPE_R, // add, mul, mulh, mulhu, mulhsu, sub, sll, slt, sltu, xor, or, and, div, divu, rem, remu
            7'b1110011, TYPE_N, // ebreak
            7'b0100011, TYPE_S, // sb, sh, sw, sd
            7'b1100011, TYPE_B  // beq, bne
        }
    );
    
    // typei, typeu writes register
    always @(*) begin
        case(id_inst_type)
            3'b001:  id_imm = {{32{id_instruction[31]}}, 
                                   id_instruction[31:12], 12'b0};
            3'b000:  id_imm = {{52{id_instruction[31]}}, 
                                   id_instruction[31:20]};
            3'b011:  id_imm = {{43{id_instruction[31]}}, 
                                   id_instruction[31],    id_instruction[19:12], 
                                   id_instruction[20],    id_instruction[30:21], 1'b0};
            3'b110:  id_imm = {{52{id_instruction[31]}}, 
                                   id_instruction[31:20]};
            3'b010:  id_imm = {{52{id_instruction[31]}}, 
                                   id_instruction[31:25], id_instruction[11:7]}; // TODO
            3'b101:  id_imm = {{51{id_instruction[31]}}, 
                                   id_instruction[31],    id_instruction[7], 
                                   id_instruction[30:25], id_instruction[11:8], 1'b0};
            default: id_imm = 'd0;
        endcase
    end
  
endmodule
