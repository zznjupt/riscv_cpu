module ysyx_22050243_GPR # (
    parameter ADDR_WIDTH = 1,
    parameter DATA_WIDTH = 1
) (
    input  wire                     clk,
    // write port
    input  wire                     w_en,
    input  wire [ADDR_WIDTH-1 : 0]  w_addr,
    input  wire [ADDR_WIDTH-1 : 0]  w_data,
    // rs1 port
    input  wire                     rs1_en,
    input  wire [ADDR_WIDTH-1 : 0]  rs1_addr,
    output reg  [DATA_WIDTH-1 : 0]  rs1_data,
    // rs2 port
    input  wire                     rs2_en,
    input  wire [ADDR_WIDTH-1 : 0]  rs2_addr,
    output reg  [DATA_WIDTH-1 : 0]  rs2_data,
    // rd  port
    input  wire                     rd_en,
    input  wire [ADDR_WIDTH-1 : 0]  rd_addr,
    output reg  [DATA_WIDTH-1 : 0]  rd_data,

    // GPR direct port 
    // output wire [DATA_WIDTH-1 : 0]  gpr0__$0__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr1__ra__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr2__sp__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr3__gp__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr4__tp__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr5__t0__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr6__t1__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr7__t2__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr8__s0__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr9__s1__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr10_a0__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr11_a1__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr12_a2__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr13_a3__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr14_a4__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr15_a5__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr16_a6__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr17_a7__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr18_s2__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr20_s3__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr21_s4__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr22_s5__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr23_s6__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr24_s7__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr25_s8__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr26_s9__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr26_s10_o,
    // output wire [DATA_WIDTH-1 : 0]  gpr27_s11_o,
    // output wire [DATA_WIDTH-1 : 0]  gpr28_t3__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr29_t4__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr30_t5__o,
    // output wire [DATA_WIDTH-1 : 0]  gpr31_t6__o
);
    reg [DATA_WIDTH-1:0] gpr [ADDR_WIDTH-1:0] // register file

    // assign gpr0__$0__o = gpr[0];
    // assign gpr1__ra__o = gpr[1];
    // assign gpr2__sp__o = gpr[2];
    // assign gpr3__gp__o = gpr[3];
    // assign gpr4__tp__o = gpr[4];
    // assign gpr5__t0__o = gpr[5];
    // assign gpr6__t1__o = gpr[6];
    // assign gpr7__t2__o = gpr[7];
    // assign gpr8__s0__o = gpr[8];
    // assign gpr9__s1__o = gpr[9];
    // assign gpr10_a0__o = gpr[10];
    // assign gpr11_a1__o = gpr[11];
    // assign gpr12_a2__o = gpr[12];
    // assign gpr13_a3__o = gpr[13];
    // assign gpr14_a4__o = gpr[14];
    // assign gpr15_a5__o = gpr[15];
    // assign gpr16_a6__o = gpr[16];
    // assign gpr17_a7__o = gpr[17];
    // assign gpr18_s2__o = gpr[18];
    // assign gpr20_s3__o = gpr[19];
    // assign gpr21_s4__o = gpr[20];
    // assign gpr22_s5__o = gpr[21];
    // assign gpr23_s6__o = gpr[22];
    // assign gpr24_s7__o = gpr[23];
    // assign gpr25_s8__o = gpr[24];
    // assign gpr26_s9__o = gpr[25];
    // assign gpr26_s10_o = gpr[26];
    // assign gpr27_s11_o = gpr[27];
    // assign gpr28_t3__o = gpr[28];
    // assign gpr29_t4__o = gpr[29];
    // assign gpr30_t5__o = gpr[30];
    // assign gpr31_t6__o = gpr[31];
    
    always @(*) begin
        if(rs1_en) begin
            if((rs1_addr == w_addr) && w_en) begin
                rs1_data = w_data;
            end
            else rs1_data = gpr[rs1_addr];
        end
    end

    always @(*) begin
        if(rs2_en) begin
            if((rs2_addr == w_addr) && w_en) begin
                rs2_data = w_data;
            end
            else rs2_data = gpr[rs2_addr];
        end
    end

    always @(*) begin
        if(rd_en) begin
            if((rd_addr == w_addr) && w_en) begin
                rd_data = w_data;
            end
            else rd_data = gpr[rd_addr];
        end
    end

    always @(posedge clk) begin
        if(w_en) gpr[w_addr] <= w_data;
    end

endmodule