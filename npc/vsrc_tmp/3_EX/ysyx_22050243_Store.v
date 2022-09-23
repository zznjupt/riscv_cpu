module ysyx_22050243_Store # (
    parameter WIDTH = 64
) (
    input                    mem_w,
    input                    mem_r,
    input                    funct3,
    input      [WIDTH-1 : 0] reg2_out,
    output reg [WIDTH-1 : 0] store_out,
    output reg [7:0]         mask_out
);
    always @(*) begin
        if((mem_w == 1'b1) || (mem_r) == 1'b1)
            case(funct3)
                3'b100, 3'b000: begin
                    store_out = {{56{reg2_out[7]}}, reg_out[7:0]};  // sext[7:0]
                    mask_out  = 8'b0000_0001;
                end
                3'b101, 3'b001: begin
                    store_out = {{48{reg2_out[7]}}, reg_out[15:0]}; // sext[15:0]
                    mask_out  = 8'b0000_0011;
                end
                3'b110, 3'b010: begin
                    store_out = {{32{reg2_out[7]}}, reg_out[31:0]}; // sext[31:0]
                    mask_out  = 8'b0000_1111;
                end       
                3'b011:         begin
                    store_out = reg2_out                            // sext[15:0]
                    mask_out  = 8'b1111_1111;
                end        
            endcase
            else begin
                store_out = 'b0;
                mask_out  = 'b0;
            end
    end

endmodule
