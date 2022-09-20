`include "ysyx_22050243_DEFINE.v"

module ysyx_22050243_RISCV # (
    parameter IMEM_DATA_WIDTH = 64,  // instruction     memory-address-width
    parameter DMEM_DATA_WIDTH = 64.  // data            memory-address-width
    parameter IBUS_DATA_WIDTH = 32,  // instruction-bus data-width
    parameter DBUS_DATA_WIDTH = 64   // data-bus        data-width
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
    output wire [8-1 :               0]  data_w_mask_o          ,
    output wire [DMEM_DATA_WIDTH-1 : 0]  data_w_addr_o          ,

    input  wire                          i_data_r_valid         ,
    input  wire [DBUS_DATA_WIDTH-1 : 0]  i_data_r               ,
    output wire                          data_r_en_o            ,

    // IQR port

    input  wire                          i_clint_timer_iqr      ,
    output wire                          timer_irq_ready_o
);
    // pipeline
    wire					   stall_hzd; // stall signal
	wire					   stall_jalr;
    wire                       mem_stall;
    wire [1:0]			       fwd_jalr;
    wire					   branch_out_signal;
    wire					   jump_signal;

    // CSR interface
    wire [DBUS_DATA_WIDTH-1:0] w_pc_mtvec;
    wire [DBUS_DATA_WIDTH-1:0] w_pc_mepc;
    wire                       w_exception_flush;
    wire [1:0]                 w_exception_csr_update;
    wire                       w_irq_flush;
    wire                       w_mret_csr_update;
    wire [DBUS_DATA_WIDTH-1:0] w_mie;
    wire [DBUS_DATA_WIDTH-1:0] w_mstatus;


    // PC init
    reg  [DBUS_DATA_WIDTH-1:0] pc = 64'h0000_0000_8000_0000;
    // PC self-increment rusult
    wire [DBUS_DATA_WIDTH-1:0] pc_seq_if_stage;

    always @(posedge clk) begin
        if(rst) pc <= 64'h0000_0000_8000_0000;
        // stall the pipeline
        else if(stall_hzd | stall_jalr | inst_stall | mem_stall)
                pc <= pc;
        // pc += 4 or J inst
        else    pc <= pc_seq_if_stage;
    end



    // ******* IF stage 1 *******  
    wire [IBUS_DATA_WIDTH-1:0] inst_if_stage;
    wire					   inst_stall;
    wire                       pc_stall ;
    assign inst_addr_o       = {pc[IMEM_DATA_WIDTH-1:0]};               // fetch the I addr
    assign pc_stall          = stall_hzd | stall_jalr | inst_stall | mem_stall;
    assign inst_addr_valid_o = (inst_addr_o != 'd0) & (!pc_stall)
    assign inst_stall        = inst_addr_valid_o && !i_inst_valid
    assign inst_if_stage     = (inst_addr_valid_o & i_inst_valid)? i_inst | 'd0;
    ysyx_22050243_Adder # (
        .DATA_WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Adder_IF (
        .a (pc),
        .b (64'd4),
        .c (pc_seq_if_stage)
    );
    // IF to ID FFs
    wire [IBUS_DATA_WIDTH-1:0] inst_if_2_id_ff;
    wire [DBUS_DATA_WIDTH-1:0] pc_if_2_id_ff;
    ysyx_22050243_Regslice # (
        .DATA_WIDTH (IBUS_DATA_WIDTH + DBUS_DATA_WIDTH)
    ) ysyx_22050243_Regslice_IF_2_ID (
        .clk   (clk),
        .rst   (rst),
        .flush (w_irq_flush | w_exception_flush | w_mret_csr_update),
        .stall (stall_hzd | mem_stall | stall_jalr),
        .en    (!branch_out_signal & !jump_signal & !inst_stall),
        .din   ({inst_if_stage  , pc           }),
        .dout  ({inst_if_2_id_ff, pc_if_2_id_ff})
    );
    // **************************


    // ******* ID stage 2 *******
    // ID opcode
    wire [6:0] opcode_id_stage;
    wire [2:0] funct_code_id_stage;
    // opcode decode result
	wire	                    alu_src_id_stage;
    wire [2:0]                  mem2reg_id_stage;
    wire	                    reg_w_id_stage;
    wire	                    mem_r_id_stage;
    wire	                    mem_w_id_stage;
    wire	                    branch_id_stage;
    wire [2:0]                  alu_op_id_stage;
	wire [1:0]					pc_src_id_stage;
	wire					    csr_rd_id_stage;

	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s1_id_stage;
	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s2_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	pc_jump_id_stage;

	wire [DBUS_DATA_WIDTH-1:0]	gpr_s1_id_stage;
	wire [GPR_ADDR_WIDTH-1:0]   gpr_r1_addr_id_stage;
    wire [DBUS_DATA_WIDTH-1:0]	gpr_r1_data_id_stage;
	wire [GPR_ADDR_WIDTH-1:0]   gpr_r2_addr_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	gpr_r2_data_id_stage;

	wire [DBUS_DATA_WIDTH-1:0]  imm_id_stage;
	wire [3:0]					alu_ctrl_id_stage;
	
    assign opcode_id_stage = inst_if_2_id_ff[ 6: 0];
    assign funct3_id_stage = inst_if_2_id_ff[14:12];
    assign jump_signal     = (opcode_id_stage == `ysyx_22050243_JAL) | (opcode_id_stage == `ysyx_22050243_JALR);
    
    always @(*) begin
        case(opcode_id_stage)
            `ysyx_22050243_JALR:begin
                // if(fwd_jalr == 2'b01)     adder_s1_id_stage =
                // else if(fwd_jalr = 2'b10) adder_s1_id_stage =
                // else                      adder_s1_id_stage = gpr_s1_id_stage;
            end
            default :                        adder_s1_id_stage = pc_if_2_id_ff;            
        endcase
    end

    always @(*) begin
        case(opcode_id_stage)
            `ysyx_22050243_JAL:  adder_s2_id_stage = {43{inst_if_2_id_ff[31]}, inst_if_2_id_ff[31], inst_if_2_id_ff[20], inst_if_2_id_ff[30:21], 1'b0}; // int64_t
            `ysyx_22050243_JALR: adder_s2_id_stage = {52{inst_if_2_id_ff[31]}, inst_if_2_id_ff[31:20]}; // int64_t
            default:             adder_s2_id_stage = 64'd0;
        endcase
    end

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
        // rd
        .w_en       (),
        .w_addr     (inst_if_2_id_ff[11:7])
        .w_data     (),
        // rs1
        .r1_en      (1'b1),
        .r1_addr    (gpr_r1_addr_id_stage),
        .r1_data    (gpr_r1_data_id_stage)
        // rs2
        .r2_en      (1'b1),
        .r2_addr    (gpr_r2_addr_id_stage),
        .r2_data    (gpr_r2_data_id_stage)
        // JALR read rs1 in IF
        .r3_en      (1'b1),
        .r3_addr    (inst_if_2_id_ff[19:15]),
        .r3_data    (gpr_s1_id_stage)
    );



    // ID to EX FFs

    // ******* EX stage 3 *******

    // EX to MEM FFs

    // *******MEM stage 4 *******

    // MEM to WB FFs

    // ******* WB stage 5 *******



endmodule
