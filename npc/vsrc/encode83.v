module encode83 (
    input  [7:0] X,
    input        en,
    output reg [2:0] Y,
    output       flag  
);
    integer i;
    always @(en or X) begin
        if(en) begin
            Y = 3'b000;
            for(i = 7; i >= 0; i=i-1) begin
                if(X[i] == 1) Y = i[2:0];
            end
        end
        else Y = 0;
    end

    assign flag = (X==8'b0)?0:1;

endmodule
