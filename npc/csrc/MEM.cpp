#include <verilated.h>

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

// MEM stage

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint32_t inst[5]  = {
    0x11111111,
    0x22222222,
    0x33333333,
    0x44444444,
    0x55555555
};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

uint32_t* IF(uint64_t pc) {
    printf("0x%08n\n", inst) ;
    printf("0x%08n\n", (inst+pc-CONFIG_MBASE));
    printf("0x%08x\n", *inst);
    printf("0x%08x\n", *(inst+pc-CONFIG_MBASE));
    return inst + pc - CONFIG_MBASE; 
}

extern "C" void MEM_pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask, bool w_en) {
    if(!w_en) return;
    if(waddr >= CONFIG_MBASE) {
        int low = 0, high = 0, index = 0, low_get = 0;
        uint8_t mask = wmask;
        while (mask != 0) {
            // printf("cprintf: index = %d, mask = %x\n", index, mask);
            if (!low_get && mask % 2 == 1) {
                low_get = 1;
                low = index;
            }
            index++;
            mask >>= 1;
        }
        high = index - 1;
        int length = high - low + 1;
        printf("\033[1;33mcprintf: MEM stage\33[0m\nwrite in addr:    \33[1;34m0x%016lx\33[0m, wdata =  \33[1;32m0x%016lx\33[0m, wmask = 0x%02x\n", waddr, wdata, wmask);
        switch (length) {
            case 1: *(uint8_t  *)guest_to_host((waddr & ~0x7ull) + low) = (uint8_t )wdata; break;
            case 2: *(uint16_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint16_t)wdata; break;
            case 4: *(uint32_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint32_t)wdata; break;
            case 8: *(uint64_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint64_t)wdata; break;
            default: assert(0); break;
        }   
    } else assert(0);
}

extern "C" void MEM_pmem_read(uint64_t raddr, uint64_t* rdata, bool r_en) {
    if(!r_en) return;
    if(raddr >= CONFIG_MBASE) {
        *rdata = *(uint64_t*) guest_to_host(raddr);
        printf("\033[1;33mcprintf: MEM stage\33[0m\nread from addr:   \33[1;34m0x%016lx\33[0m, rdata =  \33[1;32m0x%016lx\33[0m\n", raddr, *rdata);
    } else assert(0);
}

extern "C" void IF_inst_read(uint64_t pc, uint32_t* inst, bool inst_en) {
    if(!inst_en) return;
    if(pc >= CONFIG_MBASE) {
        *inst = *IF(pc);
        printf("\033[1;33mcprintf:  IF stage\33[0m\nread from pc:     \33[1;34m0x%016lx\33[0m,  inst =          \33[1;32m0x%08x\33[0m\n", pc, *inst);
    } else assert(0);

}