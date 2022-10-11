#include "paddr.h"

extern void set_simtime();
extern uint32_t cpu_pc;
extern uint32_t* vmem;
extern uint32_t VGA_port[2];

uint8_t pmem[CONFIG_MSIZE]; // 大端存储
uint8_t* base() { return pmem; }

uint64_t paddr_read(uint64_t addr, uint64_t len) { // sdb read
    addr -= 0x80000000;
    uint64_t raddr = 0x0;
    for(uint64_t i = addr + len - 1; i >= addr; i--) {
        raddr <<= 8;
        raddr += pmem[i];
    }
    return raddr;
}
// support VGA
// support UART
extern "C" void pmem_read(ll raddr, ll* rdata) {
    if(raddr == 0xa0000100) { // vga
        printf("r VGA %llx %x %x\n",raddr, VGA_port[0], VGA_port[1]);
        *rdata = ((uint64_t)VGA_port[1] << 32) | VGA_port[0];
    } else if(raddr >= 0xa1000000 && raddr <= 0xa1200000) {
        *rdata = *(uint64_t *)((uint8_t *)vmem + raddr - 0xa1000000);
    } else assert(0);
    #ifdef MTRACE
        printf("MTRACE: read data in addr %llx, data is %llx\n", waddr, wdata);
    #endif 
}

extern "C" void pmem_write(ll waddr, ll wdata, char wmask) { 
    char c = wdata & 0xFF;
    if     (waddr == 0xa00003f8) printf("%c",c); // uart
    else if(waddr == 0xa0000100) {               // vga
        printf("w VGA addr %llx: mask: %x data: %lx\n", waddr, wmask, wdata);
        assert((wmask & 0xFF) == 0x0F || (wmask & 0xFF) == 0xF0);
        if((wmask & 0xFF) == 0x0F)
             VGA_port[0] = wdata;
        else VGA_port[1] = wdata;
    } else if(waddr >= 0xa1000000 && waddr < 0xa1200000) {
        assert((wmask & 0xFF) == 0x0F || (wmask & 0xFF) == 0xF0);
        if((wmask & 0xFF) == 0x0F) 
             *(uint32_t *)((uint8_t *)vmem + waddr - 0xa1000000)     = wdata;
        else *(uint32_t *)((uint8_t *)vmem + waddr - 0xa1000000 + 4) = wdata;
    } else {
        waddr &= ~(0x7ull);
        waddr -= 0x80000000;
        // no plic implement 
        ll tmp = wdata;
        for(ll i = waddr; i <= waddr + 7; i++) {
            if(wmask & (1 << (i - waddr))) pmem[i] = wdata & 0xFF;
            wdata >>= 8;
        }
    }
    #ifdef MTRACE
        printf("MTRACE: write data in addr %llx, data is %llx, mask is %x\n", waddr,wdata, wmask);
    #endif 
}