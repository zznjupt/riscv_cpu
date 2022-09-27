#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vysyx_22050243_Mem.h> // V{module_name}.h
// #include <svdpi.h>

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {
    // printf("Hello, ysyx!\n");
	Verilated::commandArgs(argc, argv);
    Vysyx_22050243_Mem* top = new Vysyx_22050243_Mem("top");
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");
    // simulate
    // top->clk = 0;
    // top->rst = 0;

    // top->eval();
    // while (sc_time_stamp() < 1 && !Verilated::gotFinish()) { //  && ebreak_flag == 0
    //      if ((main_time % 10) == 5) top->clk = 1;
    //      if ((main_time % 10) == 0) top->clk = 0;
    //      top->eval();
    // }
                                                top->clk = 0;
    bool     r_en       = 0;                    top->data_r_en  = r_en;
    bool     w_en       = 1;                    top->data_w_en  = w_en;
    uint64_t data_addr  = 0x0000000080000008;   top->data_addr  = data_addr;
    uint64_t data_w     = 0xffffffffffffffff;   top->data_w     = data_w;
    uint8_t  data_wmask = 0xff;                 top->data_wmask = data_wmask; 
    top->eval();main_time++;tfp->dump(main_time);
                                                top->clk = 1;
    top->eval();main_time++;tfp->dump(main_time);
                                                top->clk = 0;
    r_en     = 1;                               top->data_r_en  = r_en;
    top->eval();main_time++;tfp->dump(main_time);
                                                top->clk = 1;
    r_en     = 0;                               top->data_r_en  = r_en;
    top->eval();main_time++;tfp->dump(main_time);
                                                top->clk = 0;
    w_en                = 1;                    top->data_w_en  = w_en;
    data_addr           = 0x0000000080000008;   top->data_addr  = data_addr;
    data_w              = 0x0000000000000000;   top->data_w     = data_w;
    data_wmask          = 0x08;                 top->data_wmask = data_wmask; 
    top->eval();main_time++;tfp->dump(main_time);
                                                top->clk = 1;
    top->eval();main_time++;tfp->dump(main_time);
    r_en     = 1;                               top->data_r_en  = r_en;
    
    top->eval();main_time++;tfp->dump(main_time);
    r_en     = 0;                               top->data_r_en = r_en;
    top->eval();main_time++;tfp->dump(main_time);
    // printf("o_data_r = 0x%016x\n", top->data_r);
    // while (sc_time_stamp() < 10 && !Verilated::gotFinish()) { //  && ebreak_flag == 0
    //     top->clk = ~top->clk;

    //     top->eval();
    // }
    printf("sim exit\n");
    main_time++;
    tfp->dump(main_time);
    top->final();
    tfp->close();
    delete top;

    return 0;
}
