module ysyx_22050243_ImmGen # (
    parameter IBUS_DATA_WIDTH = -1,
    parameter DBUS_DATA_WIDTH = -1
) (
    input      [IBUS_DATA_WIDTH-1 : 0] inst,
    output reg [DBUS_DATA_WIDTH-1 : 0] imm
);
    wire [6:0] opcode;

    reg        is_R;

    reg        is_I;
    reg        is_S;
    reg        is_B;
    reg        is_U;
    reg        is_J;

    wire [11:0] imm_I;
    wire [11:0] imm_S;
    wire [12:0] imm_B;
    wire [19:0] imm_U;
    wire [20:0] imm_J;

    wire [DBUS_DATA_WIDTH-1 : 0] imm_sext_I;
    wire [DBUS_DATA_WIDTH-1 : 0] imm_sext_S;
    wire [DBUS_DATA_WIDTH-1 : 0] imm_sext_B;
    wire [DBUS_DATA_WIDTH-1 : 0] imm_sext_U;
    wire [DBUS_DATA_WIDTH-1 : 0] imm_sext_J;

    assign opcode =  inst[ 6: 0];
    assign imm_I  =  inst[31:20];
    assign imm_S  = {inst[31:25], inst[11:7]};
    assign imm_B  = {inst[31],    inst[7],     inst[30:25], inst[11: 8], 1'b0};
    assign imm_U  =  inst[31:12];
    assign imm_J  = {inst[31],    inst[19:12], inst[20]   , inst[30:21], 1'b0};

    ysyx_22050243_Extend # (
        .IS_SIGNED    (1),
        .DATA_WIDTH_I (12),
        .DATA_WIDTH_O (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Extend_I (
        .i_data       (imm_I),
        .data_o       (imm_sext_I)
    );

    ysyx_22050243_Extend # (
        .IS_SIGNED    (1),
        .DATA_WIDTH_I (12),
        .DATA_WIDTH_O (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Extend_S (
        .i_data       (imm_S),
        .data_o       (imm_sext_S)
    );

    ysyx_22050243_Extend # (
        .IS_SIGNED    (1),
        .DATA_WIDTH_I (13),
        .DATA_WIDTH_O (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Extend_B (
        .i_data       (imm_B),
        .data_o       (imm_sext_B)
    );

    ysyx_22050243_Extend # (
        .IS_SIGNED    (1),
        .DATA_WIDTH_I (20),
        .DATA_WIDTH_O (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Extend_U (
        .i_data       (imm_U),
        .data_o       (imm_sext_U)
    );

    ysyx_22050243_Extend # (
        .IS_SIGNED    (1),
        .DATA_WIDTH_I (21),
        .DATA_WIDTH_O (DBUS_DATA_WIDTH)
    ) ysyx_22050243_Extend_J (
        .i_data       (imm_J),
        .data_o       (imm_sext_J)
    );


    always @(*) begin
        case(opcode) 
            `ysyx_22050243_OP                   : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'1_0_0_0_0_0;

            `ysyx_22050243_JALR,
            `ysyx_22050243_LOAD,
            `ysyx_22050243_OP_IMM,
            `ysyx_22050243_OP_IMM32             : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'0_1_0_0_0_0;

            `ysyx_22050243_STORE                : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'0_0_1_0_0_0;

            `ysyx_22050243_BRANCH               : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'0_0_0_1_0_0;

            `ysyx_22050243_LUI,
            `ysyx_22050243_AUIPC                : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'0_0_0_0_1_0;

            `ysyx_22050243_JAL                  : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'0_0_0_0_0_1;

            default                             : {is_R, is_I, is_S, is_B, is_U, is_J} = 6'000000;
        endcase
    end

    always @(*) begin
        case({is_R, is_I, is_S, is_B, is_U, is_J})
            6'b100000: imm = 'd0;
            6'b010000: imm = imm_sext_I;
            6'b001000: imm = imm_sext_S;
            6'b000100: imm = imm_sext_B;
            6'b000010: imm = imm_sext_U;
            6'b000001: imm = imm_sext_J;
            default  : imm = 'd0;
        endcase
  end

endmodule
