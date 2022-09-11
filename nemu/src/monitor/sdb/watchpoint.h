#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include "common.h"
#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  int value;
  int newvalue;
  char Enb;
  char type;
  char str[32];
  /* TODO: Add more members if necessary */

} WP;

WP* new_wp();
void free_wp(int);
void print_wp();
int judge_wp();
void init_wp_pool();

#endif