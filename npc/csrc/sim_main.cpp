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

    for(int A = -8; A <= 7; A++) {
        for(int B = -8; B <= 7; B++) {

                top->A = A;
                top->B = B;

                int op = 5;
                top->op = op;
                top->eval();
                tfp->dump(main_time); // dump_wave
                int result = top->alu_result;
                if(result>=8) result -= 16;
                printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
                assert(result == (A^B));

                
                main_time++;

                // op = 2;
                // top->op = op;
                // top->eval();
                // tfp->dump(main_time); // dump_wave
                // result = top->alu_result;
                // if(result>=8) result -= 16;
                // printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
                // //assert(top->y == ((s==0)?a:b));
                
                // main_time++;
                

        }
    }

    top->final();
    tfp->close();
    delete top;

    return 0;
}
