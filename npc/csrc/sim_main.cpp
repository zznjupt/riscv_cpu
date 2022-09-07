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
    for(int X0 = 0; X0 <= 3; X0++) {
        for(int X1 = 0; X1 <= 3; X1++) {
            for(int X2 = 0; X2 <= 3; X2++) {
                for(int X3 = 0; X3 <= 3; X3++) {
                    for(int Y = 0; Y <= 3; Y++) {
                            top->X0 = X0;
                            top->X1 = X1;
                            top->X2 = X2;
                            top->X3 = X3;
                            top->Y = Y;
                            top->eval();
                            tfp->dump(main_time); // dump_wave
                            printf("X0 = %d, X1 = %d, X2 = %d, X3 = %d,Y = %d, F = %d\n", X0, X1, X2, X3, Y, top->F);
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
