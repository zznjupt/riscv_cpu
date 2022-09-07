module mux(a,b,c,d,s,y);
  input  [1:0]  a,b,c,d,s;
  output [1:0]  y;
  MuxKey #(4, 2, 2) i0 (
    y, s, {
        2'b00, a,
        2'b01, b,
        2'b10, c,
        2'b11, d
    } 
  );
endmodule
