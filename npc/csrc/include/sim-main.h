#ifndef SIM_MAIN_H__
#define SIM_MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <assert.h>
#include <getopt.h>


void exit_now();
void isa_reg_display();

extern struct CPU_state {
    // PC & GPR
    uint64_t gpr[32];
    uint64_t pc;
    // CSR
    uint64_t mepc;
    uint64_t mstatus;
    uint64_t mcause;
    uint64_t mtvec;
} cpu_s; 

#endif