module encode83 (
    input  [7:0] X,
    input        en,
    output reg [2:0] Y,
    output       flag  
);
    always @(en or X) begin
        if(en) begin
            Y = 3'b000;
            casez (X)
                8'b1???_????: Y = 3'b111;
                8'b01??_????: Y = 3'b110;
                8'b001?_????: Y = 3'b101;
                8'b0001_????: Y = 3'b100;
                8'b0000_1???: Y = 3'b011;
                8'b0000_01??: Y = 3'b010;
                8'b0000_001?: Y = 3'b001;
                8'b0000_0001: Y = 3'b000;
                default: Y = 3'b000;
            endcase
        end
        else Y = 3'b000;
    end

    assign flag = (X==8'b0)?0:1;

endmodule
