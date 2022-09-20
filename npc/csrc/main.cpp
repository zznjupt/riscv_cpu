#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <VTOP.h> // V{module_name}.h

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    VTOP* top = new VTOP("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->clk = 0;
    top->rst = 0;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");


    // simulate

    uint64_t PC = 0x80000000;
    uint32_t inst = 0x00448493;

    while (sc_time_stamp() < 1000 && !Verilated::gotFinish()) {
         if ((main_time % 10) == 5) top->clk = 1;
         if ((main_time % 10) == 0) top->clk = 0;
         top->eval();
         printf("result = %ld\n",top->result);
         tfp->dump(main_time);
         main_time++;
     }

    top->final();
    tfp->close();
    delete top;

    return 0;
}
