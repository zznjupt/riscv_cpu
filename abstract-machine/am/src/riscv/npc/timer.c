#include <am.h>
#include "npc.h"

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t cycle = 0;
  asm volatile("csrr %0, mcycle" : "=r"(cycle) : );
  uptime->us = cycle/2;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 25;
  rtc->month  = 10;
  rtc->year   = 2022;
}
