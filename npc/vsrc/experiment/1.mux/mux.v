`include "/home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/expriment/1.mux/mux_tmp.v"

module mux(a,b,s,y);
  input   a,b,s;
  output  y;
  MuxKey #(2, 1, 1) i0 (
    y, s, {
        1'b0, a,
        1'b1, b
    } 
  );
endmodule
