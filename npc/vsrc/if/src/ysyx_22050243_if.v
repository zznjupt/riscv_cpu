module ysyx_22050243_if (
    input  wire             clk,
    input  wire             rst,
    input  wire [5:0]       stall,        // stall_bus
    input  wire [64:0]      br_bus,       // br_2_if

    output wire [128:0]     if_2_id_bus, // if_2_id
    output wire             isram_e,
    output wire [63:0]      isram_addr
);

    reg  [63:0] pc_reg;
    reg         ce_reg;
    wire [63:0] next_pc;
    wire        br_e;
    wire [63:0] br_addr;

    assign {br_e, br_addr} = br_bus;
    assign next_pc = br_e ? br_addr : pc_reg + 64'h4;
    always @(posedge clk) begin
        if (rst) begin
            pc_reg <= 64'h0000_0000_7fff_fffc; // PC_START  M_base
            ce_reg <= 1'b0;
        end
        else if(stall[3])            begin end // reserve
        else if(stall[0] | stall[1]) begin end // ex_stall or load_stall
        else begin
            pc_reg <= next_pc;
            ce_reg <= 1'b1;
        end
    end

    wire [63:0] if_pc;
    assign if_pc = (pc_reg == 64'h0000_0000_7fff_fffc) ? 64'b0 : pc_reg;
// ************************output*********************************
    assign if_2_id_bus = {ce_reg, if_pc, next_pc}; // 1+64+64 = 128:0
    assign isram_e      = ce_reg;
    assign isram_addr   = if_pc;
       
endmodule
