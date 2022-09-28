#include <am.h>
#include <nemu.h>
/* 
  path = abstract-machine/am/include/amdev.h:

  AM_DEVREG( 5, TIMER_RTC,    RD, int year, month, day, hour, minute, second); // not use
  AM_DEVREG( 6, TIMER_UPTIME, RD, uint64_t us);

  path = abstract-machine/platform/nemu/include/nemu.h

  #define RTC_ADDR        (DEVICE_BASE + 0x0000048)
*/

// static AM_TIMER_UPTIME_T *boot_time;

void __am_timer_init() {
  
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
