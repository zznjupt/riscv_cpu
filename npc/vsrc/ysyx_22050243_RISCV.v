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
    // input                                i_inst_valid           ,
    input  wire [IBUS_DATA_WIDTH-1 : 0]  i_inst                 ,
    // output wire                          inst_en_o              ,
    // output wire                          inst_addr_valid        ,
    output wire [IMEM_DATA_WIDTH-1 : 0]  inst_addr_o            ,

    // data port
    input  wire                          i_data_w_ready         ,
    output wire                          data_w_en_o            ,
    output wire [DBUS_DATA_WIDTH-1 : 0]  data_w_o               ,
    output wire [8-1 :               0]  data_w_mask_o          ,
    output wire [DMEM_DATA_WIDTH-1 : 0]  data_w_addr_o          ,

    input  wire                          i_data_r_valid         ,
    input  wire [DBUS_DATA_WIDTH-1 : 0]  i_data_r               ,
    output wire                          data_r_en_o            

    // IQR port

    // input  wire                          i_clint_timer_iqr      ,
    // output wire                          timer_irq_ready_o
);

    // PC
    // PC init
    reg  [DBUS_DATA_WIDTH-1:0] pc = 64'h0000_0000_8000_0000;
    // PC self-increment rusult
    wire [DBUS_DATA_WIDTH-1:0] pc_seq_if_stage;

    always @(posedge clk) begin
        if(rst) pc <= 64'h0000_0000_8000_0000;
        // pc += 4 or J inst
        else    pc <= pc_seq_if_stage;
    end
    // ******* IF stage 1 *******  
    wire [IBUS_DATA_WIDTH-1:0] inst_if_stage;
    
    assign inst_if_stage = i_inst;
    assign inst_addr_o   = {pc[IMEM_DATA_WIDTH-1:0]};

    ysyx_22050243_ADDER # (
        .DATA_WIDTH (DBUS_DATA_WIDTH)
    ) ysyx_22050243_ADDER_IF (
        .a (pc),
        .b (64'd4),
        .c (pc_seq_if_stage)
    );

    // IF to ID FFs

    // ******* ID stage 2 *******
    // ID opcode
    wire [6:0] opcode_id_stage;
    wire [2:0] funct_code_id_stage;
    // opcode decode result
	wire	                    alu_src_id_stage;
    wire [2:0]                  mem2reg_id_stage;
    wire	                    reg_write_id_stage;
    wire	                    mem_read_id_stage;
    wire	                    mem_write_id_stage;
    wire	                    branch_id_stage;
    wire [2:0]                  alu_op_id_stage;
	wire [1:0]					pc_src_id_stage;
	wire					    csr_rd_id_stage;

	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s1_id_stage;
	reg	 [DBUS_DATA_WIDTH-1:0]	adder_s2_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	pc_jump_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	rf_s1_id_stage;
	wire						jump_signal;
	
	wire [RF_ADDR_WIDTH-1:0]    gpr_rd1_addr_id_stage;
    wire [DBUS_DATA_WIDTH-1:0]	gpr_rd1_data_id_stage;
	wire [RF_ADDR_WIDTH-1:0]    gpr_rd2_addr_id_stage;
	wire [DBUS_DATA_WIDTH-1:0]	gpr_rd2_data_id_stage;

	wire [DBUS_DATA_WIDTH-1:0]  imm_id_stage;
	wire [3:0]					alu_ctrl_id_stage;
	
    assign opcode_id_stage = 

    // ID to EX FFs

    // ******* EX stage 3 *******

    // EX to MEM FFs

    // *******MEM stage 4 *******

    // MEM to WB FFs

    // ******* WB stage 5 *******



endmodule