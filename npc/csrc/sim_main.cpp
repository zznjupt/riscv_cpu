#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vencode83.h> // V{module_name}.h

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    Vencode83* top = new Vencode83("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    // simulate
    for(int X = 0; X <= 255; X++) {
        int en = 1;
        top->X = X;
        top->en = en;
        top->eval();
        tfp->dump(main_time); // dump_wave
        printf("X = %d, en = %d, flag = %d, Y = %d \n", X, en, top->flag, top->Y);
        //assert(top->y == ((s==0)?a:b));

        main_time++;
    }

    top->final();
    tfp->close();
    delete top;

    return 0;
}
