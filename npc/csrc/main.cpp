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
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    // simulate

    // uint64_t A = 42124214;
    // uint64_t B = 3213124124;

    // top->a = A;
    // top->b = B;

    // top->inst = pmem_read(top->pc)
    // top->eval();
    // tfp->dump(main_time); // dump_wave
    // uint64_t result = top->s;
    // printf("A = %ld, B = %ld, result = %ld\n", A, B, result);
    // assert((result == (A + B)));
    // main_time++;

    top->final();
    tfp->close();
    delete top;

    return 0;
}
