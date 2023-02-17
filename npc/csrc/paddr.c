#include "paddr.h"
#include "defs.h"
#include <stdio.h>
#include <assert.h>
#include <time.h>

extern void set_simtime();

extern uint32_t cpu_pc;//main.c(cpu of npc)
extern uint32_t vgactl_port_base[2];
extern uint32_t* vmem;

uint8_t pmem[CONFIG_MSIZE];//big endian
uint8_t* base(){
  return pmem;
}
uint64_t paddr_read(uint64_t addr, uint64_t len){//sdb read
  addr -= 0x80000000;
  uint64_t res = 0;
  for(uint64_t i = addr + len - 1; (int64_t)i >= (int64_t)addr; i--){
    res <<= 8;
    res += pmem[i];
  }
  return res;
}

// static uint64_t boot_time = 0;

// static uint64_t get_time_internal() {
//   struct timespec now;
//   clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
//   uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
//   return us;
// }

// uint64_t get_time() {
//   if (boot_time == 0) boot_time = get_time_internal();
//   uint64_t now = get_time_internal();
//   uint64_t us = now - boot_time;
//   return us;
// }
// copy from nemu project
// static uint32_t *rtc_port_base = NULL;

// static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
//   assert(offset == 0 || offset == 4); 
//   if (!is_write && offset == 0) { // change
//     uint64_t us = get_time();
//     rtc_port_base[0] = (uint32_t)us;
//     rtc_port_base[1] = us >> 32;
//   }
// }

extern "C" void pmem_read(long long raddr, long long *rdata) {
  if(raddr == 0xa0000100){//vgactl[0-1]
    //printf("r vgactl %llx %x %x\n",raddr, vgactl_port_base[0],vgactl_port_base[1]);
    *rdata = ((uint64_t)vgactl_port_base[1] << 32) | vgactl_port_base[0];
    //Only support 64bit transfer. Length control(lb lw ld) is controlled by verilator.
  } else if(raddr == 0xa0000048){
    // // printf("time = %ld\n", get_time());
    // *rdata = get_time();
  } else if(raddr >= 0xa1000000 && raddr <= 0xa1200000){
    *rdata = *(uint64_t *)((uint8_t *)vmem + raddr - 0xa1000000);
  } else assert(0); 
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) { 
 
  char c = wdata & 0xFF;
  if(waddr == 0xa00003f8){//serial w(ok)
    printf("%c",c); 
  } else if(waddr == 0xa0000100){ //vgactl[0-1]     
    // printf("w vgactl addr%llx: mask:%x data:%llx\n",waddr,wmask,wdata);
    assert((wmask & 0xFF) == 0xF || (wmask & 0xFF) == 0xF0);
    if((wmask & 0xFF) == 0x0F){ 
      vgactl_port_base[0] = wdata;
    } else {
      vgactl_port_base[1] = wdata;
    }
  } else if(waddr >= 0xa1000000 && waddr < 0xa1200000){
    //printf("w fb waddr:%llx wdata:%llx mask:%x\n",waddr,wdata,wmask & 0xFF);
    //printf("BLMFY %llx\n", waddr - 0xa1000000); 707b8
    assert((wmask & 0xFF) == 0xF || (wmask & 0xFF) == 0xF0);
    if((wmask & 0xFF) == 0x0F){
      *(uint32_t *)((uint8_t *)vmem + waddr - 0xa1000000) = wdata;
    } else {
      *(uint32_t *)((uint8_t *)vmem + waddr - 0xa1000000 + 4) = wdata;
    }
    
  } else {
    
    waddr &= ~(0x7ull);
    waddr -= 0x80000000;
    //no plic
    long long tmp = wdata;
    for(long long i = waddr; i <= waddr + 7; i++){
      if(wmask & (1 << (i - waddr))){
        pmem[i] = wdata & 0xFF;
      }
      wdata >>= 8;
    }
  }
  #ifdef MTRACE
    printf("write data with addr %llx, data is %llx mask %x\n",waddr,wdata,wmask);
  #endif
}