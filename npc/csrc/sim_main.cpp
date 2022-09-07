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
    for(int a = 0; a <= 3; a++) {
        for(int b = 0; b <= 3; b++) {
            for(int c = 0; c <= 3; c++) {
                for(int d = 0; d <= 3; c++) {
                    for(int s = 0; s<= 3; s++) {
                            top->a = a;
                            top->b = b;
                            top->c = c;
                            top->d = d;
                            top->s = s;
                            top->eval();
                            tfp->dump(main_time); // dump_wave
                            printf("a = %d, b = %d, c = %d, d = %d,s = %d, y = %d\n", a, b,c, d, s, top->y);
                            //assert(top->y == ((s==0)?a:b));
                            main_time++;
                    }
                }
            }
        }
    }
    top->final();
    tfp->close();
    delete top;

    return 0;
}
