#include <verilated.h>

// ID stage
extern "C" void ID_ctrl_show(uint64_t opcode) {
    printf("ID_stage:\n");
    printf("I_opcode = 0x%2lx\n", opcode);
}
extern "C" void ID_funct3_show(uint64_t funct3) { printf("I_funct3 = 0x%1lx\n", funct3); } 

int ebreak_flag = 0;
extern "C" void ebreak() { ebreak_flag = 1; }