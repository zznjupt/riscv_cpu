
module ysyx_22050243_Memctrl (
    input rst,

    // CPU port
    input       [7:0]           mem_byte_en, // I
    input       [63:0]          mem_addr,    // I
    input                       mem_r_en,    // I
    input                       mem_w_en,    // I
    input       [63:0]          mem_w_data,  // I

    output reg  [63:0]          mem_r_data,  // O

    // MEM port
    output      [63:0]          ram_addr,    // O
    output                      ram_w_en,    // O
    output reg  [63:0]          ram_wmask,   // O
    output reg  [63:0]          ram_w_data,  // O
    output                      ram_r_en,    // O
    
    input       [63:0]          ram_r_data   // I
);  

    reg [63:0] sb_ram_wmask   ;
    reg [63:0] sb_ram_w_data ;
    reg [63:0] sh_ram_wmask   ;
    reg [63:0] sh_ram_w_data ;
    reg [63:0] sw_ram_wmask   ;
    reg [63:0] sw_ram_w_data ;
    reg [63:0] sd_ram_wmask   ;
    reg [63:0] sd_ram_w_data ;

    reg [63:0] lb_ram_r_data ;
    reg [63:0] lh_ram_r_data ;
    reg [63:0] lw_ram_r_data ;
    reg [63:0] ld_ram_r_data ;

    assign ram_addr = mem_addr;
    assign ram_w_en = rst ? 0 : mem_w_en;
    assign ram_r_en = rst ? 0 : mem_r_en;

    wire sb_signal = mem_w_en & (mem_byte_en == 8'b0000_0001);
    wire sh_signal = mem_w_en & (mem_byte_en == 8'b0000_0011);
    wire sw_signal = mem_w_en & (mem_byte_en == 8'b0000_1111);
    wire sd_signal = mem_w_en & (mem_byte_en == 8'b1111_1111);

    wire lb_signal = mem_r_en & (mem_byte_en == 8'b0000_0001);
    wire lh_signal = mem_r_en & (mem_byte_en == 8'b0000_0011);
    wire lw_signal = mem_r_en & (mem_byte_en == 8'b0000_1111);
    wire ld_signal = mem_r_en & (mem_byte_en == 8'b1111_1111);

    // 写MUX
    always @(*) begin
        if(rst)begin
            ram_wmask  = 64'h00000000_80000000;
            ram_w_data = 64'h00000000_80000000;
        end 
        else if(sb_signal) begin
            ram_wmask  = sb_ram_wmask  ;
            ram_w_data = sb_ram_w_data;
        end 
        else if(sh_signal) begin
            ram_wmask  = sh_ram_wmask  ;
            ram_w_data = sh_ram_w_data;
        end
        else if(sw_signal) begin
            ram_wmask  = sw_ram_wmask  ;
            ram_w_data = sw_ram_w_data;           
        end
        else if(sd_signal) begin
            ram_wmask  = sd_ram_wmask  ;
            ram_w_data = sd_ram_w_data;        
        end
        else begin
            ram_wmask  = 64'h00000000_80000000;
            ram_w_data = 64'h00000000_80000000;
        end
    end

    // 读MUX
    always @(*) begin
        if(rst)
            mem_r_data = 64'h00000000_80000000;
        else if(lb_signal)
            mem_r_data = lb_ram_r_data;
        else if(lh_signal)
            mem_r_data = lh_ram_r_data;
        else if(lw_signal)
            mem_r_data = lw_ram_r_data;
        else if(ld_signal)
            mem_r_data = ld_ram_r_data;
        else
            mem_r_data = `ZERO_WOr;
    end

    // 写字节的处理
    always @(sb_signal or mem_addr[2:0] or mem_w_data[7:0]) begin
        if(sb_signal)begin
            case(mem_addr[2:0])
                3'd0:begin 
                    sb_ram_wmask  = 64'h0000_0000_0000_00FF;
                    sb_ram_w_data = {56'd0,mem_w_data[7:0]};
                end
                3'd1:begin 
                    sb_ram_wmask  = 64'h0000_0000_0000_FF00;
                    sb_ram_w_data = {48'd0,mem_w_data[7:0],8'd0};
                end
                3'd2:begin 
                    sb_ram_wmask  = 64'h0000_0000_00FF_0000;
                    sb_ram_w_data = {40'd0,mem_w_data[7:0],16'd0};
                end
                3'd3:begin 
                    sb_ram_wmask  = 64'h0000_0000_FF00_0000;
                    sb_ram_w_data = {32'd0,mem_w_data[7:0],24'd0};
                end
                3'd4:begin 
                    sb_ram_wmask  = 64'h0000_00FF_0000_0000;
                    sb_ram_w_data = {24'd0,mem_w_data[7:0],32'd0};
                end
                3'd5:begin 
                    sb_ram_wmask  = 64'h0000_FF00_0000_0000;
                    sb_ram_w_data = {16'd0,mem_w_data[7:0],40'd0};
                end
                3'd6:begin 
                    sb_ram_wmask  = 64'h00FF_0000_0000_0000;
                    sb_ram_w_data = {8'd0,mem_w_data[7:0],48'd0};
                end
                3'd7:begin 
                    sb_ram_wmask  = 64'hFF00_0000_0000_0000;
                    sb_ram_w_data = {mem_w_data[7:0],56'd0};
                end
            endcase
        end
        else begin
            sb_ram_wmask  = 64'h00000000_80000000;
            sb_ram_w_data = 64'h00000000_80000000;
        end
    end

    // 写双字的处理
    always @(sh_signal or mem_addr[2:1] or mem_w_data[15:0]) begin
        if(sh_signal)begin
            case(mem_addr[2:1])
                2'd0:begin  
                    sh_ram_wmask   = 64'h0000_0000_0000_FFFF;
                    sh_ram_w_data = {48'd0,mem_w_data[15:0]};
                end
                2'd1:begin  
                    sh_ram_wmask   = 64'h0000_0000_FFFF_0000;
                    sh_ram_w_data = {32'd0,mem_w_data[15:0],16'd0};
                end
                2'd2:begin  
                    sh_ram_wmask   = 64'h0000_FFFF_0000_0000;
                    sh_ram_w_data = {16'd0,mem_w_data[15:0],32'd0};
                end
                2'd3:begin  
                    sh_ram_wmask   = 64'hFFFF_0000_0000_0000;
                    sh_ram_w_data = {mem_w_data[15:0],48'd0};
                end
            endcase
        end
        else begin
            sh_ram_wmask  = 64'h00000000_80000000;
            sh_ram_w_data = 64'h00000000_80000000;
        end
    end

    // 4字节写
    always @(sw_signal or mem_addr[2] or mem_w_data[31:0]) begin
        if(sw_signal)begin
            case(mem_addr[2])
                1'b0:begin  
                    sw_ram_wmask   = 64'h0000_0000_FFFF_FFFF;
                    sw_ram_w_data = {32'd0,mem_w_data[31:0]};
                end
                1'b1:begin  
                    sw_ram_wmask   = 64'hFFFF_FFFF_0000_0000;
                    sw_ram_w_data = {mem_w_data[31:0],32'd0};
                end
            endcase
        end
        else begin
            sw_ram_wmask  = 64'h00000000_80000000;
            sw_ram_w_data = 64'h00000000_80000000;
        end
    end

    // 8字节写
    always @(sd_signal or mem_w_data) begin
        if(sd_signal) begin
            sd_ram_wmask  = 64'hFFFF_FFFF_FFFF_FFFF;
            sd_ram_w_data = 64'h00000000_80000000;
        end
        else begin
            sd_ram_wmask  = 64'h00000000_80000000;
            sd_ram_w_data = 64'h00000000_80000000;
        end
    end
    

    // 读字节处理
    always @(lb_signal or mem_addr[2:0] or ram_r_data) begin
        if(lb_signal)
            case(mem_addr[2:0])
                3'd0:lb_ram_r_data = {56'd0,ram_r_data[ 7: 0]};
                3'd1:lb_ram_r_data = {56'd0,ram_r_data[15: 8]};
                3'd2:lb_ram_r_data = {56'd0,ram_r_data[23:16]};
                3'd3:lb_ram_r_data = {56'd0,ram_r_data[31:24]};
                3'd4:lb_ram_r_data = {56'd0,ram_r_data[39:32]};
                3'd5:lb_ram_r_data = {56'd0,ram_r_data[47:40]};
                3'd6:lb_ram_r_data = {56'd0,ram_r_data[55:48]};
                3'd7:lb_ram_r_data = {56'd0,ram_r_data[63:56]};
            endcase
        else 
            lb_ram_r_data = `ZERO_WOr;
    end

    // 读双字节
    always @(lh_signal or mem_addr[2:1] or ram_r_data) begin
        if(lh_signal)
            case(mem_addr[2:1])
                2'd0:lh_ram_r_data = {48'd0,ram_r_data[15: 0]};
                2'd1:lh_ram_r_data = {48'd0,ram_r_data[31:16]};
                2'd2:lh_ram_r_data = {48'd0,ram_r_data[47:32]};
                2'd3:lh_ram_r_data = {48'd0,ram_r_data[63:48]};
            endcase
        else
            lh_ram_r_data = 64'h00000000_80000000;
    end
    // 读四字节
    always @(lw_signal or mem_addr[2] or ram_r_data) begin
        if(lw_signal)
            case(mem_addr[2])
            1'b0:lw_ram_r_data = {32'd0,ram_r_data[31: 0]};
            1'b1:lw_ram_r_data = {32'd0,ram_r_data[63:32]};
            endcase
        else
            lw_ram_r_data = 64'h00000000_80000000;
    end

    // 读八字节
    always @(ld_signal or ram_r_data) begin
        if(ld_signal)
            ld_ram_r_data = ram_r_data;
        else
            ld_ram_r_data = 64'h00000000_80000000;
    end

endmodule

