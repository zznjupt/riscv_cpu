#include <am.h>
#include <nemu.h>
/* 
  path = abstract-machine/am/include/amdev.h:

  AM_DEVREG( 5, TIMER_RTC,    RD, int year, month, day, hour, minute, second); // not use
  AM_DEVREG( 6, TIMER_UPTIME, RD, uint64_t us);

  path = abstract-machine/platform/nemu/include/nemu.h

  #define RTC_ADDR        (DEVICE_BASE + 0x0000048)

  static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
  static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
  static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

  static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
  static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
  static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }
*/

// static AM_TIMER_UPTIME_T *boot_time;

void __am_timer_init() {
  
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t a = (uint32_t)inl(RTC_ADDR);
  uint32_t b = (uint32_t)inl(RTC_ADDR + 4);
  uptime->us = ((uint64_t)b << 32) + (uint64_t)a;
}


  // uint32_t a = 0;
//   uint32_t b = 0;

// void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
//   a = (uint32_t)inl(RTC_ADDR);
//   // b = (uint32_t)inl(RTC_ADDR + 4);
//   uptime->us = ((uint64_t)b << 32) + (uint64_t)a;
//   b = (uint32_t)inl(RTC_ADDR + 4);
// }

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
