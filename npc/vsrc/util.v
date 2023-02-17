/* copy from NJU-projectN

  MuxKey 模块实现了“键值选择”功能，即在一个 (键值，数据) 的列表 lut 中，根据给定的键值 key ，将 out 设置为与其匹配的数据。若列表中不存在键值为 key 的数据，则 out 为 0 。特别地， MuxKeyWithDefault 模块可以提供一个默认值 default_out ，当列表中不存在键值为 key 的数据，则 out 为 default_out 。实例化这两个模块时需要注意如下两点：
  1. 需要使用者提供键值对的数量 NR_KEY，键值的位宽 KEY_LEN 以及数据的位宽 DATA_LEN 这三个参数，并保证端口的信号宽度与提供的参数一致，否则将会输出错误的结果
  2. 若列表中存在多个键值为 key 的数据，则 out 的值是未定义的，需要使用者来保证列表中的键值互不相同

  MuxKeyInternal 模块的实现中用到了很多高级的功能，如 generate 和 for 循环等，为了方便编写还使用了行为建模方式，在这里我们不展开介绍，通过结构化建模的抽象，使用者可以无需关心这些细节。
*/

// mux

module ysyx_22050243_MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  //width and length
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;
    else out = (hit ? lut_out : default_out);
  end
endmodule

module ysyx_22050243_MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22050243_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule

module ysyx_22050243_MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  ysyx_22050243_MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
endmodule

// module ysyx_22050243_mux21(a,b,s,y);
//   input[63:0] a,b;
//   input s;
//   output[63:0] y;
//   ysyx_22050243_MuxKey #(2, 1, 64) i0 (y, s, {
//     1'b0, a,//y = a
//     1'b1, b //y = b 
//   });
// endmodule


// decoder

module ysyx_22050243_decoder24 (
    input  [1:0]   in,
    output [3:0]   out
);
    genvar i;
    generate for(i = 0; i < 4; i = i+1) assign out[i] = (in == i);
    endgenerate
endmodule

module ysyx_22050243_decoder38 (
    input [2:0]     in,
    output[7:0]     out
);
    genvar i;
    generate for(i = 0; i < 8; i = i+1) assign out[i] = (in == i); 
    endgenerate
endmodule


module ysyx_22050243_decoder532 (
    input [4:0]     in,
    output[31:0]    out
);
    genvar i;
    generate for(i = 0; i < 32; i = i+1) assign out[i] = (in == i); 
    endgenerate
endmodule


module ysyx_22050243_decoder664 (
    input [5:0]     in,
    output[63:0]    out
);
    genvar i;
    generate for(i = 0; i < 64; i = i+1) assign out[i] = (in == i); 
    endgenerate
endmodule
