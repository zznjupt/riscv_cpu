#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_if.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc,char **argv) {
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC();
    Vysyx_22050243_if *top = new Vysyx_22050243_if("top");
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    top->rst    = 1;
    top->stall  = 0;

    while(sc_time_stamp() < 20 && !Verilated::gotFinish()) {
        if(sc_time_stamp() >= 4) top->rst = 0; // rst on
        top->clk = 0; top->eval(); printf("clock down\n");
        top->clk = 1; top->eval(); printf("clock up\n"); printf("pc = 0x%016lx\n", top->isram_addr);

        tfp->dump(main_time);
        main_time++;
     }
     top->final();
     tfp->close();
     delete top;
     return 0;
}