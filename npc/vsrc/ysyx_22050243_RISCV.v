`define ysyx_22050243_LUI       7'b01101_11
`define ysyx_22050243_AUIPC     7'b00101_11

`define ysyx_22050243_OP_IMM    7'b00100_11
`define ysyx_22050243_OP_IMM32  7'b00110_11
`define ysyx_22050243_OP_32     7'b01110_11
`define ysyx_22050243_OP        7'b01100_11

`define ysyx_22050243_JAL       7'b11011_11
`define ysyx_22050243_JALR      7'b11001_11
`define ysyx_22050243_BRANCH    7'b11000_11

`define ysyx_22050243_STORE     7'b01000_11
`define ysyx_22050243_LOAD      7'b00000_11

`define ysyx_22050243_EBREAK    7'b11100_11

module ysyx_22050243_RISCV # (
    parameter IMEM_DATA_WIDTH = 64,  // instruction     memory-address-width
    parameter DMEM_DATA_WIDTH = 64,  // data            memory-address-width
    parameter IBUS_DATA_WIDTH = 32,  // instruction-bus data-width
    parameter DBUS_DATA_WIDTH = 64,  // data-bus        data-width
    parameter GPR_ADDR_WIDTH  = 5    // gpr             address-width (log2(32) = 5) 

) (
    // common port
    input  wire clk, // clock
    input  wire rst, // synchronous reset

    // instruction port
    input                                i_inst_valid           ,
    input  wire [IBUS_DATA_WIDTH-1 : 0]  i_inst                 ,
    output wire                          inst_en_o              ,
    output wire                          inst_addr_valid_o      ,
    output wire [IMEM_DATA_WIDTH-1 : 0]  inst_addr_o            ,

    // data port
    input  wire                          i_data_w_ready         ,
    output wire                          data_w_en_o            ,
    output wire [DBUS_DATA_WIDTH-1 : 0]  data_w_o               ,
    output wire [8-1 :               0]  data_wmask_o           ,
    output wire [DMEM_DATA_WIDTH-1 : 0]  data_addr_o            ,

    input  wire                          i_data_r_valid         ,
    input  wire [DBUS_DATA_WIDTH-1 : 0]  i_data_r               ,
    output wire                          data_r_en_o            ,

    // IQR port

    input  wire                          i_clint_timer_irq      ,
    output wire                          timer_irq_ready_o
);

    // pipeline hazard|stall|clint and so on
    wire					    inst_stall;
    wire                        pc_stall ;
    // ID
    wire					    stall_hzd; // stall signal
	wire					    stall_jalr;
    wire [1:0]			        fwd_jalr;
    // MEM
    wire                        mem_stall;


    // IF
    wire [DBUS_DATA_WIDTH-1:0]  pc_seq_if_stage;              // PC_4
    wire [IBUS_DATA_WIDTH-1:0]  inst_if_stage;                // INST_IF
    reg  [DBUS_DATA_WIDTH-1:0]  pc = 64'h0000_0000_8000_0000; // PC
    // IF_2_ID FFs
    wire [IBUS_DATA_WIDTH-1:0]  inst_if_2_id_ff;
    wire [DBUS_DATA_WIDTH-1:0]  pc_if_2_id_ff;





    // ID
    // ID opcode
    wire [6:0] opcode_id_stage;
    wire [2:0] funct3_id_stage;
    // wire       ecall_if_stage;
    // opcode decode result
	wire	                    alu_src_id_stage;
    wire [2:0]                  mem2reg_id_stage;
    wire	                    reg_w_id_stage;
    wire	                    mem_r_id_stage;
    wire	                    mem_w_id_stage;
    wire	                    branch_id_stage;
    wire [2:0]                  alu_op_id_stage;
	wire [1:0]					pc_src_id_stage;
	wire					    csr_r_id_stage;

	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s1_id_stage;
	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s2_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	pc_jump_id_stage;

	wire [DBUS_DATA_WIDTH-1:0]	gpr_s1_id_stage;
	wire [GPR_ADDR_WIDTH-1:0]   gpr_r1_addr_id_stage;
    wire [DBUS_DATA_WIDTH-1:0]	gpr_r1_data_id_stage;
	wire [GPR_ADDR_WIDTH-1:0]   gpr_r2_addr_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	gpr_r2_data_id_stage;
    wire					    jump_signal;

	wire [DBUS_DATA_WIDTH-1:0]  imm_id_stage;
	wire [3:0]					alu_ctrl_id_stage;
    // ID_2_EX FFs 
    wire                        alu_src_id_2_ex_ff;
    wire [2:0]                  mem2reg_id_2_ex_ff;
    wire                        reg_w_id_2_ex_ff;
    wire                        mem_r_id_2_ex_ff;
    wire                        mem_w_id_2_ex_ff;
    wire                        branch_id_2_ex_ff;
    wire [2:0]                  alu_op_id_ex_ff;
    wire [1:0]                  pc_src_id_2_ex_ff;
    wire [3:0]                  alu_ctrl_id_2_ex_ff;
    wire                        csr_r_id_2_ex_ff;

    wire [IBUS_DATA_WIDTH-1:0]  inst_id_2_ex_ff;
    wire [DBUS_DATA_WIDTH-1:0]  imm_id_2_ex_ff;
    wire [DBUS_DATA_WIDTH-1:0]	gpr_r1_data_id_2_ex_ff;
	wire [DBUS_DATA_WIDTH-1:0]	gpr_r2_data_id_2_ex_ff;
    wire [DBUS_DATA_WIDTH-1:0]	pc_id_2_ex_ff;





    // EX
    reg  [DBUS_DATA_WIDTH-1:0]  alu_s1_data_ex_stage;
    reg  [DBUS_DATA_WIDTH-1:0]  alu_s2_data_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  adder_b_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  adder_s_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  imm_ls_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  alu_a_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  alu_b_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  alu_out_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  store_r2_data_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  result_ex_stage;
    wire [DBUS_DATA_WIDTH-1:0]  zero_ex_stage;
    wire                        branch_out_signal;
    wire [1:0]                  fwd_a;
    wire [1:0]                  fwd_b;
    // EX_2_MEM FFs
    wire [2:0]                  mem2reg_ex_2_mem_ff;
    wire                        reg_w_ex_2_mem_ff;
    wire                        mem_r_ex_2_mem_ff;
    wire                        mem_w_ex_2_mem_ff;

    wire [DBUS_DATA_WIDTH-1:0]  adder_s_ex_2_mem_ff;
    wire [IBUS_DATA_WIDTH-1:0]  inst_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  imm_ls_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  pc_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  alu_out_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  result_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  gpr_r1_data_ex_2_mem_ff;
    wire [DBUS_DATA_WIDTH-1:0]  gpr_r2_data_ex_2_mem_ff;
    wire                        csr_r_ex_2_mem_ff;




    // MEM
    wire                        r_data_mem_stage;
    wire                        load_data_mem_stage;
    // MEM_2_WB FFs
    wire [IBUS_DATA_WIDTH-1:0]  inst_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  result_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  r_date_mem_2_wb_ff;
    wire [2:0]                  mem2reg_mem_2_wb_ff;
    wire                        reg_w_mem_2_wb_ff;
    wire                        csr_r_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  adder_s_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  imm_ls_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  pc_mem_2_wb_ff;
    wire [DBUS_DATA_WIDTH-1:0]  alu_out_mem_2_wb_ff;






    // WB
    reg  [DBUS_DATA_WIDTH-1:0]  w_data_wb_stage;
    reg  [DBUS_DATA_WIDTH-1:0]  r_csr_data;
    reg  [DBUS_DATA_WIDTH-1:0]  w_csr_data;
    wire                        reg_w_wb_stage;




	//CSR interface
	wire [DBUS_DATA_WIDTH-1:0]  w_pc_mtvec;
	wire [DBUS_DATA_WIDTH-1:0]  w_pc_mepc;
	wire    					w_exception_flush;
	wire  						w_irq_flush;
	wire [1:0]					w_excep_csr_update;
	wire						w_mret_csr_update;                                                    
	wire [DBUS_DATA_WIDTH-1:0] 	w_mie;
    wire [DBUS_DATA_WIDTH-1:0] 	w_mstatus;






    //*******     PC     ********
    always @(posedge clk) begin
        if(rst)                                                  pc <= 64'h0000_0000_8000_0000;
        else if(w_mret_csr_update)                               pc <= w_pc_mepc;
        else if(w_exception_flush | w_irq_flush)                     pc <= {w_pc_mtvec[DBUS_DATA_WIDTH-1:2], 2'b00};
        else if(branch_out_signal)                               pc <= adder_s_ex_stage;
        else if(jump_signal)                                     pc <= pc_jump_id_stage;
        else if(stall_hzd | stall_jalr | inst_stall | mem_stall) pc <= pc;
        else if(inst_if_stage[6:0] == `ysyx_22050243_JALR)                     pc <= {pc_seq_if_stage[DBUS_DATA_WIDTH-1:1], 1'b0};
        else                                                     pc <= pc_seq_if_stage;
    end



    // ******* IF stage 1 *******  
    assign inst_en_o         = 1'b1;
    assign inst_addr_o       = {pc[IMEM_DATA_WIDTH-1:0]};               // fetch the I addr
    assign pc_stall          = stall_hzd | stall_jalr | inst_stall | mem_stall;
    assign inst_addr_valid_o = (inst_addr_o != 'd0) & (!pc_stall);
    assign inst_stall        = inst_addr_valid_o && !i_inst_valid;
    assign inst_if_stage     = (inst_addr_valid_o & i_inst_valid)? i_inst : 'd0;


    ysyx_22050243_Adder # (
        .DATA_WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Adder_IF (
        .a (pc),
        .b (64'd4),
        .c (pc_seq_if_stage)
    );
    
    ysyx_22050243_Regslice # ( // IF to ID FFs
        .DATA_WIDTH (IBUS_DATA_WIDTH + DBUS_DATA_WIDTH)
    ) ysyx_22050243_Regslice_IF_2_ID (
        .clk   (clk),
        .rst   (rst),
        .en    (!branch_out_signal & !jump_signal & !inst_stall),
        .stall (stall_hzd | mem_stall | stall_jalr),
        .flush (w_irq_flush | w_exception_flush | w_mret_csr_update),
        .din   ({inst_if_stage  , pc           }),
        .dout  ({inst_if_2_id_ff, pc_if_2_id_ff})
    );
    // **************************


    // ******* ID stage 2 *******

	
    assign opcode_id_stage = inst_if_2_id_ff[ 6: 0];
    assign funct3_id_stage = inst_if_2_id_ff[14:12];
    assign jump_signal     = (opcode_id_stage == `ysyx_22050243_JAL) | (opcode_id_stage == `ysyx_22050243_JALR);


    always @(*) begin
        case(opcode_id_stage)
            `ysyx_22050243_JALR:begin
                if(fwd_jalr == 2'b01)     adder_s1_id_stage = result_ex_2_mem_ff;
                else if(fwd_jalr == 2'b10) adder_s1_id_stage = w_data_wb_stage;
                else                      adder_s1_id_stage = gpr_s1_id_stage;
            end
            default :                     adder_s1_id_stage = pc_if_2_id_ff;            
        endcase
    end

    always @(*) begin
        case(opcode_id_stage)
            `ysyx_22050243_JAL:  
            adder_s2_id_stage = {{43{inst_if_2_id_ff[31]}}, inst_if_2_id_ff[31], inst_if_2_id_ff[20], inst_if_2_id_ff[30:21], 1'b0}; 
            `ysyx_22050243_JALR: 
            adder_s2_id_stage = {{52{inst_if_2_id_ff[31]}}, inst_if_2_id_ff[31:20]}; // int64_t
            default:             
            adder_s2_id_stage = 64'd0;
        endcase
    end

    ysyx_22050243_jalr_hazard_detect # (
        .GPR_ADDR_WIDTH (GPR_ADDR_WIDTH),
        .IBUS_DATA_WIDTH(IBUS_DATA_WIDTH)
    ) ysyx_22050243_jalr_hazard_detect (
        .inst_if_2_id_ff  (inst_if_2_id_ff),
        .rd_id_2_ex_ff    (inst_id_2_ex_ff[11:7]),
        .reg_w_id_2_ex_ff (reg_w_id_2_ex_ff),
        .rd_ex_2_mem_ff   (inst_ex_2_mem_ff[11:7]),
        .mem_r_ex_2_mem_ff(mem_r_ex_2_mem_ff),
        .reg_w_ex_2_mem_ff(reg_w_ex_2_mem_ff),
        .rd_mem_2_wb_ff   (inst_mem_2_wb_ff[11:7]),
        .fwd_jalr         (fwd_jalr),
        .stall_jalr       (stall_jalr)
    );


    ysyx_22050243_Adder # (
        .DATA_WIDTH(DBUS_DATA_WIDTH)
    ) ysyx_22050243_Adder_ID (
        .a (adder_s1_id_stage),
        .b (adder_s2_id_stage),
        .s (pc_jump_id_stage)
    );

    ysyx_22050243_Ctrl ysyx_22050243_Ctrl_ (
        .opcode     (opcode_id_stage),
        .funct3     (funct3_id_stage),

        .alu_src    (alu_src_id_stage),
        .alu_op     (alu_op_id_stage)
    );

    ysyx_22050243_ALUCtrl ysyx_22050243_ALUCtrl_ (
        .alu_op     (alu_op_id_stage),
        .funct      ({inst_if_2_id_ff[30], inst_if_2_id_ff[14:12]}),
        .alu_ctrl   (alu_ctrl_id_stage)
    );

    assign gpr_r1_addr_id_stage = inst_if_2_id_ff[19:15];
    assign gpr_r2_addr_id_stage = inst_if_2_id_ff[24:20];

    ysyx_22050243_GPR # (
        .DATA_WIDTH (DBUS_DATA_WIDTH),
        .ADDR_WIDTH (GPR_ADDR_WIDTH)
    ) ysyx_22050243_GPR_ (
        .clk        (clk),
        // rd (from WB stage)
        .w_en       (inst_mem_2_wb_ff[11:7]),
        .w_addr     (reg_w_wb_stage),
        .w_data     (w_data_wb_stage),
        // rs1
        .r1_en      (1'b1),
        .r1_addr    (gpr_r1_addr_id_stage),
        .r1_data    (gpr_r1_data_id_stage),
        // rs2
        .r2_en      (1'b1),
        .r2_addr    (gpr_r2_addr_id_stage),
        .r2_data    (gpr_r2_data_id_stage),
        // JALR read rs1 in IF
        .r3_en      (1'b1),
        .r3_addr    (inst_if_2_id_ff[19:15]),
        .r3_data    (gpr_s1_id_stage)
    );

    ysyx_22050243_ImmGen # (
        .IBUS_DATA_WIDTH (IBUS_DATA_WIDTH),
        .DBUS_DATA_WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_ImmGen_ (
        .inst            (inst_if_2_id_ff),
        .imm             (imm_id_stage)
    );

    ysyx_22050243_hazard_detect # (
        .GPR_ADDR_WIDTH  (GPR_ADDR_WIDTH)
    ) ysyx_22050243_hazard_detect_ (
        .rs1_if_2_id_ff  (inst_if_2_id_ff[19:15]),
        .rs2_if_2_id_ff  (inst_if_2_id_ff[24:20]),
        .rd_id_2_ex_ff   (inst_id_2_ex_ff[11:7]),
        .csr_r_id_2_ex_ff(csr_r_id_2_ex_ff),
        .mem_r_id_2_ex_ff(mem_r_id_2_ex_ff),
        .stall           (stall_hzd)
    );
    // ID to EX FFs
    ysyx_22050243_Regslice # (
        .DATA_WIDTH(1+1+3+1+1+1+1+3+2+4+ IBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH)
    ) ysyx_22050243_Regslice_ID_2_EX (
        .rst(rst),
        .en(!branch_out_signal & !stall_hzd & ! stall_jalr),
        .stall(mem_stall),
        .flush(w_irq_flush | w_exception_flush | w_mret_csr_update),
        .din({
            alu_src_id_stage, mem2reg_id_stage, reg_w_id_stage, mem_r_id_stage, mem_w_id_stage,
            branch_id_stage, alu_op_id_stage, pc_src_id_stage, alu_ctrl_id_stage, csr_r_id_stage, 
            inst_if_2_id_ff, imm_id_stage, gpr_r1_data_id_stage, gpr_r2_data_id_stage, pc_if_2_id_ff
        }),
        .dout({
            alu_src_id_2_ex_ff, mem2reg_id_2_ex_ff, reg_w_id_2_ex_ff, mem_r_id_2_ex_ff, mem_w_id_2_ex_ff,
            branch_id_2_ex_ff, alu_op_id_ex_ff, pc_src_id_2_ex_ff, alu_ctrl_id_2_ex_ff, csr_r_id_2_ex_ff,
            inst_id_2_ex_ff, imm_id_2_ex_ff, gpr_r1_data_id_2_ex_ff, gpr_r2_data_id_2_ex_ff, pc_id_2_ex_ff
        })
    );



    // ******* EX stage 3 *******
    assign alu_a_ex_stage = alu_s1_data_ex_stage;
    assign alu_b_ex_stage = (alu_src_id_2_ex_ff == 1'b1) ? imm_id_2_ex_ff : alu_s2_data_ex_stage;

    always @(*) begin
        case(fwd_a)
            2'b10:   alu_s1_data_ex_stage = result_ex_2_mem_ff;
            2'b01:   alu_s1_data_ex_stage = w_data_wb_stage;
            default: alu_s1_data_ex_stage = gpr_r1_data_id_2_ex_ff[DBUS_DATA_WIDTH-1:0];
        endcase
    end

    always @(*) begin
        case(fwd_b)
            2'b10:   alu_s2_data_ex_stage = result_ex_2_mem_ff;
            2'b01:   alu_s2_data_ex_stage = w_data_wb_stage;
            default: alu_s2_data_ex_stage = gpr_r2_data_id_2_ex_ff[DBUS_DATA_WIDTH-1:0];
        endcase
    end

    ysyx_22050243_ALU # (
        .WIDTH        (DBUS_DATA_WIDTH)
    ) ysyx_22050243_ALU_ (
        .a        (alu_a_ex_stage),
        .b        (alu_b_ex_stage),
        .alu_ctrl (alu_ctrl_id_2_ex_ff),
        .alu_out  (alu_out_ex_stage),
        .zero     (zero_ex_stage) 
    );

    ysyx_22050243_Branch # (
        .WIDTH    (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Branch_ (
        .branch     (branch_id_2_ex_ff),
        .funct3     (inst_id_2_ex_ff[14:12]),
        .alu_out    (alu_out_ex_stage[DBUS_DATA_WIDTH-1]),
        .rs1        (alu_a_ex_stage[DBUS_DATA_WIDTH-1]),
        .rs2        (alu_b_ex_stage[DBUS_DATA_WIDTH-1]),
        .zero       (zero_ex_stage),
        .branch_out (branch_out_signal)
    );

    assign imm_ls_ex_stage  = imm_id_2_ex_ff << 12; // U imm
    assign adder_b_ex_stage = (mem2reg_id_2_ex_ff == 3'b100) ? // PC + <= U imm / B imm / 4
                              imm_ls_ex_stage : 
                              ((branch_id_2_ex_ff == 1) ? imm_id_2_ex_ff : 64'd4);

    ysyx_22050243_Adder # (
        .DATA_WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Adder_EX (
        .a          (pc_id_2_ex_ff),
        .b          (adder_b_ex_stage),
        .s          (adder_s_ex_stage)
    );

    ysyx_22050243_Fwd # (
        .GPR_ADDR_WIDTH    (GPR_ADDR_WIDTH)
    ) ysyx_22050243_Fwd_ (
        .rs1_id_2_ex_ff    (inst_id_2_ex_ff[19:15]),
        .rs2_id_2_ex_ff    (inst_id_2_ex_ff[24:20]),
        .rd_ex_2_mem_ff    (inst_ex_2_mem_ff[11:7]),
        .rd_mem_2_wb_ff    (inst_mem_2_wb_ff[11:7]),
        .reg_w_ex_2_mem_ff (reg_w_ex_2_mem_ff),
        .reg_w_mem_2_wb_ff (reg_w_mem_2_wb_ff)
    );

    always @(*) begin
        case(mem2reg_id_2_ex_ff)
            3'b000:  result_ex_stage = alu_out_ex_stage;
            3'b001:  result_ex_stage = alu_out_ex_stage;
            3'b010:  result_ex_stage = imm_ls_ex_stage;
            3'b011:  result_ex_stage = adder_s_ex_stage;
            3'b100:  result_ex_stage = adder_s_ex_stage;
            default: result_ex_stage = alu_out_ex_stage;
        endcase
    end

    wire[7:0] data_wmask;

    ysyx_22050243_Store # (
        .WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Store_ (
        .mem_r     (mem_r_id_2_ex_ff),
        .mem_w     (mem_w_id_2_ex_ff),
        .funct3    (inst_id_2_ex_ff[14:12]),
        .reg2_out  (alu_s2_data_ex_stage[DBUS_DATA_WIDTH-1:0]),
        .store_out (store_r2_data_ex_stage),
        .mask_out  (data_wmask)
    );
    // EX to MEM FFs
    ysyx_22050243_Regslice # (
        .DATA_WIDTH(1+8+3+1+1+1+DBUS_DATA_WIDTH + IBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH)
    ) ysyx_22050243_Regslice_EX_2_MEM (
        .clk   (clk),
        .rst   (rst),
        .en    (1'b1),
        .stall (mem_stall),
        .flush (w_irq_flush | w_exception_flush | w_mret_csr_update),
        .din   ({
            mem2reg_id_2_ex_ff,  reg_w_id_2_ex_ff,  mem_r_id_2_ex_ff,  mem_w_id_2_ex_ff,
            csr_r_id_2_ex_ff,    data_wmask,       adder_s_ex_stage,   inst_id_2_ex_ff,
            imm_ls_ex_stage,    pc_id_2_ex_ff,     alu_out_ex_stage,   result_ex_stage,
            gpr_r1_data_id_2_ex_ff, store_r2_data_ex_stage
        }),
        .dout  ({m
            mem2reg_ex_2_mem_ff, reg_w_ex_2_mem_ff, mem_r_ex_2_mem_ff, mem_w_ex_2_mem_ff,
            csr_r_ex_2_mem_ff,   data_wmask_o,   adder_s_ex_2_mem_ff, inst_ex_2_mem_ff,
            imm_ls_ex_2_mem_ff, pc_ex_2_mem_ff,   alu_out_ex_2_mem_ff, result_ex_2_mem_ff,
            gpr_r1_data_ex_2_mem_ff, gpr_r2_data_ex_2_mem_ff 
        })
    );








    // *******MEM stage 4 *******
    assign data_w_en_o = 
                         (mem_r_ex_2_mem_ff | mem_w_ex_2_mem_ff) & 
                           mem_w_ex_2_mem_ff  & 
                         !(w_irq_flush | w_exception_flush | w_mret_csr_update);

    assign data_r_en_o =
                         (mem_r_ex_2_mem_ff | mem_w_ex_2_mem_ff) & 
                         (~mem_w_ex_2_mem_ff) & 
                         !(w_irq_flush | w_exception_flush | w_mret_csr_update);

    assign data_addr_o = {alu_out_ex_2_mem_ff[DMEM_DATA_WIDTH-1 : 0]};
    assign data_w_o    = gpr_r2_data_ex_2_mem_ff;
    assign r_data_mem_stage = i_data_r;

    ysyx_22050243_Load # (
        .WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Load_ (
        .mem_r    (mem_r_ex_2_mem_ff),
        .funct3   (inst_ex_2_mem_ff[14:12]),
        .mem_out  (r_data_mem_stage),
        .load_out (load_data_mem_stage)
    );

    assign mem_stall = (data_w_en_o & !i_data_w_ready) | (data_r_en_o & !i_data_r_valid);
    wire [63:0] data_addr_mem_2_wb_ff_o;


    // MEM to WB FFs
    ysyx_22050243_Regslice # (
        .DATA_WIDTH (1+ DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH + DBUS_DATA_WIDTH +3+1+ DBUS_DATA_WIDTH +DBUS_DATA_WIDTH + IBUS_DATA_WIDTH + DBUS_DATA_WIDTH)
    ) ysyx_22050243_Regslice_MEM_2_WB (
        .clk   (clk),
        .rst   (rst),
        .en    (!mem_stall),
        .stall (1'b0),
        .flush (w_irq_flush | w_exception_flush | w_mret_csr_update),
        .din   ({
            load_data_mem_stage, mem2reg_ex_2_mem_ff, reg_w_ex_2_mem_ff, csr_r_ex_2_mem_ff,
            imm_ls_ex_2_mem_ff,    pc_ex_2_mem_ff,  alu_out_ex_2_mem_ff, inst_ex_2_mem_ff,
            result_ex_2_mem_ff,  adder_s_ex_2_mem_ff, data_addr_o  
        }),
        .dout  ({
            r_date_mem_2_wb_ff, mem2reg_mem_2_wb_ff, reg_w_mem_2_wb_ff,  csr_r_mem_2_wb_ff,
            imm_ls_mem_2_wb_ff,   pc_mem_2_wb_ff  , alu_out_mem_2_wb_ff, inst_mem_2_wb_ff,
            result_mem_2_wb_ff, adder_s_mem_2_wb_ff, data_addr_mem_2_wb_ff_o
        })
    );
    // ******* WB stage 5 *******

    always @(*) begin
        if(reg_w_mem_2_wb_ff && (inst_mem_2_wb_ff[11:7] != 0))
            case(mem2reg_mem_2_wb_ff)
                3'b000:  w_data_wb_stage = alu_out_mem_2_wb_ff;
                3'b001:  w_data_wb_stage = r_date_mem_2_wb_ff;
                3'b010:  w_data_wb_stage = imm_ls_mem_2_wb_ff;
                3'b011:  w_data_wb_stage = adder_s_mem_2_wb_ff;
                3'b100:  w_data_wb_stage = adder_s_mem_2_wb_ff;
                3'b101:  w_data_wb_stage = r_csr_data;
                default: w_data_wb_stage = 64'd0;
            endcase
        else             w_data_wb_stage = 64'd0;
    end

    ysyx_22050243_CSR # (
        .ADDR_WIDTH(12),
        .DBUS_DATA_WIDTH(64)
    ) ysyx_22050243_CSR_ (
        .clk                (clk),
        .rst                (rst),
        .w_en               (csr_r_mem_2_wb_ff),
        .w_addr             (inst_mem_2_wb_ff[31:20]),
        .w_data             (w_csr_data),
        .r_en               (csr_r_mem_2_wb_ff),
        .r_addr             (inst_mem_2_wb_ff[31:20]),
        .r_data             (r_csr_data),

        .pc_mtvec           (w_pc_mtvec),
        .pc_mepc            (w_pc_mepc),

        .inst_if_stage      (inst_if_stage),
        .inst_if_2_id_ff    (inst_if_2_id_ff),
        .inst_id_2_ex_ff    (inst_id_2_ex_ff),
        .inst_ex_2_mem_ff   (inst_ex_2_mem_ff),
        .inst_mem_2_wb_ff   (inst_mem_2_wb_ff),

        .pc_if_2_id_ff      (pc_if_2_id_ff),
        .pc_id_2_ex_ff      (pc_id_2_ex_ff),
        .pc_ex_2_mem_ff     (pc_ex_2_mem_ff),
        .pc_mem_2_wb_ff     (pc_mem_2_wb_ff),
        .pc_if_stage        (pc),

        .excep_csr_update   (w_excep_csr_update),
        .mret_csr_update    (w_mret_csr_update),
        .mie                (w_mie),
        .mstatus            (w_mstatus)
    );

    ysyx_22050243_exception_detect # (
        .ADDR_WIDTH(12),
        .IBUS_DATA_WIDTH(32),
        .DBUS_DATA_WIDTH(64)
    ) ysyx_22050243_exception_detect_ (
        .inst_mem_2_wb_ff   (inst_mem_2_wb_ff),
        .clint_timer_irq    (i_clint_timer_irq),
        .mie                (w_mie),
        .mstatus            (w_mstatus),
        .exception_stall    (w_exception_flush),
        .irq_stall          (w_irq_flush),
        .excep_csr_update   (w_excep_csr_update),
        .mret_csr_update    (w_mret_csr_update),
        .core_ready         (timer_irq_ready_o)
    );

    assign reg_w_wb_stage = (w_irq_flush) ? 0 : reg_w_mem_2_wb_ff;

    always@(*) begin
        case(inst_mem_2_wb_ff[14:12])
            3'b001:  w_csr_data =  ysyx_22050243_GPR_.gpr[inst_mem_2_wb_ff[19:15]];
            3'b010:  w_csr_data =  ysyx_22050243_GPR_.gpr[inst_mem_2_wb_ff[19:15]] | ysyx_22050243_CSR_.csr[inst_mem_2_wb_ff[31:20]];
            3'b011:  w_csr_data = ~ysyx_22050243_GPR_.gpr[inst_mem_2_wb_ff[19:15]] & ysyx_22050243_CSR_.csr[inst_mem_2_wb_ff[31:20]];
            3'b101:  w_csr_data =  {59'd0, inst_mem_2_wb_ff[19:15]};
            3'b110:  w_csr_data =  {59'd0, inst_mem_2_wb_ff[19:15]}                | ysyx_22050243_CSR_.csr[inst_mem_2_wb_ff[31:20]];
            3'b111:  w_csr_data = ~{59'd0, inst_mem_2_wb_ff[19:15]}                & ysyx_22050243_CSR_.csr[inst_mem_2_wb_ff[31:20]];
            default: w_csr_data =   64'd0;
        endcase
    end

endmodule
