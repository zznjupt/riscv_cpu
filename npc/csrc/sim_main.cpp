#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vmux.h> // V{module_name}.h

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    Vmux* top = new Vmux("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    // simulate
    for(int a = 0; a <= 1; a++) {
        for(int b = 0; b<= 1; b++) {
            for(int s = 0; s<= 1; s++) {
                    top->a = a;
                    top->b = b;
                    top->s = s;
                    int s_=s?a:b;
                    top->eval();
                    tfp->dump(main_time); // dump_wave
                    printf("a = %d, b = %d, s = %d, y = %d, s_ = %d\n", a, b, s, top->y);
                    assert(top->y == s_);
                    main_time++;
            }
        }
    }
    top->final();
    tfp->close();
    delete top;

    return 0;
}
