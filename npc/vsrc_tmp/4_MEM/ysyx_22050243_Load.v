module ysyx_22050243_Load # (
    parameter WIDTH = 64
) (
    input                    mem_r,
    input      [2:0]         funct3,
    input      [WIDTH-1 : 0] mem_out,
    output reg [WIDTH-1 : 0] load_out
);
    always @(*) begin
        if(mem_r == 1'b1)
            case(funct3)
                3'b000:  load_out = {{56{mem_out[7]}}, mem_out[7:0]};
                3'b000:  load_out = {{48{mem_out[7]}}, mem_out[15:0]};
                3'b000:  load_out = {{32{mem_out[7]}}, mem_out[31:0]};
                3'b000:  load_out = mem_out
                3'b000:  load_out = {56'b0, mem_out[7:0]};
                3'b000:  load_out = {48'b0, mem_out[15:0]};
                3'b000:  load_out = {32'b0, mem_out[31:0]};
                default: load_out = 'b0;
            endcase
        else load_out = 'b0;
    end

endmodule
