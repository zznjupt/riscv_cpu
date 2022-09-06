module onoff(a, b, f);
    input  a;
    input  b;
    output f;

    assign f = a ^ b; // 异或实现双控开关

endmodule
