#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vysyx_22050243_ADDER.h> // V{module_name}.h

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    Vysyx_22050243_ADDER* top = new Vysyx_22050243_ADDER("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");

    // simulate

    int A = 3;
    int B = 4;

    top->a = A;
    top->b = B;

    top->eval();
    tfp->dump(main_time); // dump_wave
    int result = top->s;
    printf("A = %d, B = %d, result = %d\n", A, B, result);
    assert(result == (result == A + B));
    main_time++;

    top->final();
    tfp->close();
    delete top;

    return 0;
}
