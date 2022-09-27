#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h> // for .vcd
#include <Vysyx_22050243_Mem.h> // V{module_name}.h
// #include <svdpi.h>

vluint64_t main_time = 0; // initial sim time

double sc_time_stamp() {
	return main_time;
}



// // ID stage
// extern "C" void ID_ctrl_show(uint64_t opcode) {
//     printf("ID_stage:\n");
//     printf("I_opcode = 0x%2lx\n", opcode);
// }
// extern "C" void ID_funct3_show(uint64_t funct3) { printf("I_funct3 = 0x%1lx\n", funct3); } 

// int ebreak_flag = 0;
// extern "C" void ebreak() { ebreak_flag = 1; }

// MEM stage

// static inline uint64_t host_read(void *addr, int len) {
//     switch (len) {
//         case 1: return *(uint8_t  *)addr;
//         case 2: return *(uint16_t *)addr;
//         case 4: return *(uint32_t *)addr;
//         case 8: return *(uint64_t *)addr;
//         default: assert(0);
//     }
// }

// static inline void host_write(void *addr, int len, uint64_t data) {
//     switch (len) {
//         case 1: *(uint8_t  *)addr = data; return;
//         case 2: *(uint16_t *)addr = data; return;
//         case 4: *(uint32_t *)addr = data; return;
//         case 8: *(uint64_t *)addr = data; return;
//         default: assert(0);
//     }
// }
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
// uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

extern "C" void MEM_pmem_write(uint64_t waddr, uint64_t wdata, char wmask, bool w_en) {
    if(!w_en) return;
    int low = 0, high = 0, index = 0, low_get = 0;
    uint8_t mask = wmask;
    while (mask != 0) {
        printf("index = %d, mask = %x\n", index, mask);
        if (!low_get && mask % 2 == 1) {
            low_get = 1;
            low = index;
        }
        index++;
        mask >>= 1;
    }
    high = index - 1;
    int length = high - low + 1;
    printf("MEM stage write in  0x%016lx, wdata = 0x%016lx\nwmask = %x, high = %d, low = %d\n", waddr, wdata, wmask, high, low);
    switch (length) {
        case 1: *(uint8_t  *)guest_to_host((waddr & ~0x7ull) + low) = (uint8_t )wdata; break;
        case 2: *(uint16_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint16_t)wdata; break;
        case 4: *(uint32_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint32_t)wdata; break;
        case 8: *(uint64_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint64_t)wdata; break;
        default: assert(0); break;
    }   

}

extern "C" void MEM_pmem_read(uint64_t raddr, uint64_t rdata, bool r_en) {
    if(!r_en) return;
    if(raddr >= CONFIG_MBASE) {
        rdata = *(uint64_t*) guest_to_host(raddr);
        printf("MEM stage read from 0x%016lx, rdata = 0x%016lx\n", raddr, rdata);
    }
}

extern "C" void IF_inst_read(uint64_t inst_addr, bool inst_en) {
    if(!inst_en) return;

}

int main(int argc, char** argv) {
    printf("Hello, ysyx!\n");
	Verilated::commandArgs(argc, argv);
    Vysyx_22050243_Mem* top = new Vysyx_22050243_Mem("top");
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd");
    // simulate
    // top->clk = 0;
    // top->rst = 0;

    // top->eval();
    // while (sc_time_stamp() < 1 && !Verilated::gotFinish()) { //  && ebreak_flag == 0
    //      if ((main_time % 10) == 5) top->clk = 1;
    //      if ((main_time % 10) == 0) top->clk = 0;
    //      top->eval();
    // }
    top->clk = 0;
    bool     r_en       = 0;
    bool     w_en       = 1;
    uint64_t data_addr  = 0x0000000080000008;
    uint64_t data_w     = 0xffffffffffffffff;
    uint8_t  data_wmask = 0xf;
    top->data_w_en      = w_en;
    top->data_addr      = data_addr;
    top->data_w         = data_w;
    top->data_wmask     = data_wmask; 
    top->eval();main_time++;tfp->dump(main_time);
    top->clk = 1;
    top->eval();main_time++;tfp->dump(main_time);
    top->clk = 0;
    r_en                = 0;
    w_en                = 1;
    data_addr           = 0x0000000080000008;
    data_w              = 0x0000000000000000;
    data_wmask          = 0x1;
    top->data_w_en      = w_en;
    top->data_addr      = data_addr;
    top->data_w         = data_w;
    top->data_wmask     = data_wmask; 
    top->eval();main_time++;tfp->dump(main_time);
    top->clk = 1;
    top->eval();main_time++;tfp->dump(main_time);

    r_en     = 1;
    top->data_r_en = r_en;
    top->eval();main_time++;tfp->dump(main_time);

    printf("sim exit\n");
    main_time++;
    tfp->dump(main_time);
    top->final();
    tfp->close();
    delete top;

    return 0;
}
