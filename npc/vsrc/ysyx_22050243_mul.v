module ysyx_22050243_mul (
    input  wire             clk,
    input  wire             rst,
    input  wire [63:0]      x,
    input  wire [63:0]      y,
    input  wire             xs,
    input  wire             ys,
    output wire [63:0]      high,
    output wire [63:0]      low,
    input  wire             mul_type, 
    input  wire             mul_stuck,
    output reg              ready
);
    wire [64:0]             x_ext;
    wire [66:0]             y_ext;
    wire [127:0]            psum[32:0];
    assign x_ext = {(xs ? x[63]      : 1'b0), x};
    assign y_ext = {(ys ? {2{y[63]}} : 2'b0), y, 1'b0};
    reg  [127:0]            res;
    reg  [4:0]              cnt;
    reg  [127:0]            multiplier;
    reg  [66:0]             multiplied;

    reg  [1:0]              mul_state;

    localparam              IDLE        = 2'b00, 
                            MUL_ON      = 2'b01, 
                            // MUL_QUIT    = 2'b10, 
                            MUL_OK      = 2'b11;

    wire [127:0] x_comp;
    assign       x_comp   = (~multiplier) + 1;
    wire [127:0] z        = {128{multiplied[2:0] == 3'b000 || multiplied[2:0] == 3'b111}} & 128'b0        |
                            {128{multiplied[2:0] == 3'b001 || multiplied[2:0] == 3'b010}} & multiplier    |
                            {128{multiplied[2:0] == 3'b101 || multiplied[2:0] == 3'b110}} & x_comp        |
                            {128{multiplied[2:0] == 3'b011}} & {multiplier[126:0], 1'b0}                  |
                            {128{multiplied[2:0] == 3'b100}} & {x_comp[126:0], 1'b0}; 

    always @(posedge clk) begin
        if(rst) begin
            cnt                     <= 0;
            ready                   <= 0;
            res                     <= 0;
            mul_state               <= 0;
            multiplier              <= 0;
            multiplied              <= 0;
        end else begin 
            case(mul_state)
                IDLE: begin
                    if(mul_type & !mul_stuck) begin
                        mul_state   <= MUL_ON;
                        cnt         <= 5'b0;
                        ready       <= 1'b0;
                        res         <= 128'b0;
                        multiplier  <= {{63{x_ext[64]}}, x_ext};
                        multiplied  <= y_ext;
                    end else if(!mul_stuck) begin
                        ready       <= 1'b0;
                    end
                end
                MUL_ON: begin
                    cnt             <= cnt + 1;
                    res             <= res + z;
                    multiplied      <= multiplied >> 2;
                    multiplier      <= multiplier << 2;
                    if(cnt == 5'b11111) begin
                        mul_state   <= MUL_OK;
                    end
                end
                MUL_OK: begin
                    ready           <= 1'b1;
                    mul_state       <= IDLE;
                end
                default: mul_state  <= IDLE;
            endcase
        end
    end
   
  assign high = res[127:64];
  assign low  = res[63:0];

endmodule
