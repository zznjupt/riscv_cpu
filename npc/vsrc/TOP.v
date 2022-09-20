module TOP # (

) (
    input wire         clk,
    input wire         rst,
    input wire  [31:0] i_inst,
    output wire [63:0] result,
    output wire        out_zero
);
    // IF
    wire [63:0] pc_4;
    reg  [63:0] pc;
    reg  [63:0] npc;
    wire [31:0] inst;
    
    assign pc_4 = pc + 64'h4;
    assign inst = i_inst;

    always @(posedge clk) begin
        npc <= pc_4;
    end

    always @(posedge clk) begin
        if (rst) pc <= 64'h8000_0000;
        else     pc <= npc;
    end

    // ID

    wire        alu_src_id;
    wire [2:0]  alu_op_id;

    ysyx_22050243_Ctrl ysyx_22050243_Ctrl_ (
        .opcode  (inst[6:0]),
        // .funct3  (inst[14:12]),
        .alu_src (alu_src_id),
        .alu_op  (alu_op_id)
    );

    wire [3:0]  alu_ctrl_id;

    ysyx_22050243_ALUCtrl ysyx_22050243_ALUCtrl_ (
        .alu_op   (alu_op_id),
        .funct    ({inst[30], inst[14:12]}),
        .alu_ctrl (alu_ctrl_id)
    );

    wire [63:0]  rs1;
    wire [63:0]  rs2;
    wire  [63:0]  rd;
    // wire [63:0]  s1; 

    ysyx_22050243_GPR ysyx_22050243_GPR_ (
        .clk      (clk),

        .w_en     (1'b1),
        .w_addr   (inst[11:7]),
        .w_data   (rd),

        .r1_en    (1'b1),
        .r1_addr  (inst[19:15]),
        .r1_data  (rs1),

        .r2_en    (1'b1),
        .r2_addr  (inst[24:20]),
        .r2_data  (rs2)

        // // JALR read gpr in IF
        // .r3_en    (1'b1),
        // .r3_addr  (inst[19:15]),
        // .r3_data  (s1)
    );


    wire [63:0] imm;

    ysyx_22050243_ImmGen # (
        .IBUS_DATA_WIDTH(32),
        .DBUS_DATA_WIDTH(64)
    ) ysyx_22050243_ImmGen_ (
        .inst     (inst),
        .imm      (imm)
    );

    wire [63:0] a;
    wire [63:0] b;

    wire [63:0] alu_result;
    wire        zero;

    assign a = rs1;
    assign b = (alu_src_id == 1) ? imm : rs2;

    ysyx_22050243_ALU # (
        .WIDTH(64)
    ) ysyx_22050243_ALU (
        .a           (a),
        .b           (b),
        .alu_ctrl    (alu_ctrl_id),
        .alu_result  (alu_result),
        .zero        (zero)
    );
    assign out_zero = zero;
    assign rd     = alu_result;
    assign result = rd;

endmodule
