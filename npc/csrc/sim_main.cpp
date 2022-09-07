#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <VALU.h> // V{module_name}.h

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    VALU* top = new VALU("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    // simulate
    int A = -4;
    int B = -5;
    int op = 0;
    top->A = A;
    top->B = B;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    printf("A = %d, B = %d, A+B = %d, overflow = %d, zero = %d\n", A, B, top->alu_result, top->overflow, top->zero);
    //assert(top->y == ((s==0)?a:b));

    main_time++;

    top->final();
    tfp->close();
    delete top;

    return 0;
}
