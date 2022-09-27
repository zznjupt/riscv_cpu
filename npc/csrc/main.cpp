#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vysyx_22050243_Ctrl.h> // V{module_name}.h
// #include <svdpi.h>

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}

extern "C" void ID_ctrl_show(uint64_t opcode) {
    printf("ID_stage:\n");
    printf("I_opcode = 0x%2lx\n", opcode);
}
extern "C" void ID_funct3_show(uint64_t funct3) { printf("I_funct3 = 0x%1lx\n", funct3); } 

int ebreak_flag = 0;
extern "C" void ebreak() { ebreak_flag = 1; }

int main(int argc, char** argv) {

    // ysyx
    printf("Hello, ysyx!\n");

    // initail 
	Verilated::commandArgs(argc, argv);
    Vysyx_22050243_Ctrl* top = new Vysyx_22050243_Ctrl("top");

    // .vcd dependency
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    // top->clk = 0;
    // top->rst = 0;

    top->trace(tfp, 0);
    tfp->open("wave.vcd");


    // simulate

    // uint64_t PC = 0x80000000;
    // uint32_t inst = 0x00448493;

    uint32_t opcode = 0x73;
    uint32_t funct3 = 0x1;


    top->opcode = opcode;
    top->funct3 = funct3; 

    top->eval();
    
    
    // while(ebreak_flag == 0) {

    // }

    // while (sc_time_stamp() < 1000 && !Verilated::gotFinish()) {
    //      if ((main_time % 10) == 5) top->clk = 1;
    //      if ((main_time % 10) == 0) top->clk = 0;
    //      top->eval();
    //      printf("result = %ld\n",top->result);
    //      tfp->dump(main_time);
    //      main_time++;
    //  }

    printf("ebreak\n");
    tfp->dump(main_time);
    main_time++;
    top->final();
    tfp->close();
    delete top;

    return 0;
}
