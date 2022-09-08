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

    int A = 3;
    int B = 4;

    top->A = A;
    top->B = B;

    int op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    int result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++;

    A=4,B=4;
    top->A = A;
    top->B = B;

    op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++;

    A=-3,B=-5;
    top->A = A;
    top->B = B;

    op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++;

    A=-3,B=-2;
    top->A = A;
    top->B = B;

    op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++;

    A=-3,B=-6;
    top->A = A;
    top->B = B;

    op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++;               

    A=-3,B=6;
    top->A = A;
    top->B = B;

    op = 0;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=4,B=4;
    top->A = A;
    top->B = B;

    op = 1;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=-4,B=5;
    top->A = A;
    top->B = B;

    op = 1;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=2,B=-7;
    top->A = A;
    top->B = B;

    op = 1;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=-2;
    top->A = A;
    top->B = B;

    op = 1;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=4;
    top->A = A;
    top->B = B;

    op = 2;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=4;
    top->A = A;
    top->B = B;

    op = 3;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=4;
    top->A = A;
    top->B = B;

    op = 4;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=4;
    top->A = A;
    top->B = B;

    op = 5;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=-2,B=4;
    top->A = A;
    top->B = B;

    op = 6;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=0,B=0;
    top->A = A;
    top->B = B;

    op = 6;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=5,B=-3;
    top->A = A;
    top->B = B;

    op = 6;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 


    A=3,B=3;
    top->A = A;
    top->B = B;

    op = 7;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    A=3,B=4;
    top->A = A;
    top->B = B;

    op = 7;
    top->op = op;
    top->eval();
    tfp->dump(main_time); // dump_wave
    result = top->alu_result;
    if(result>=8) result -= 16;
    printf("A = %d, B = %d, result = %d, overflow = %d, zero = %d\n", A, B, result, top->overflow, top->zero);
    //assert(result == (A==B));
    main_time++; 

    top->final();
    tfp->close();
    delete top;

    return 0;
}
