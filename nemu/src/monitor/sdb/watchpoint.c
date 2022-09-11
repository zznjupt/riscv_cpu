/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <regex.h>
#include "sdb.h"
#include "watchpoint.h"

static WP wp_pool[NR_WP];
static WP *head, *free_;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].Enb='N';
    wp_pool[i].type=' ';
  }
  wp_pool[NR_WP - 1].next = NULL;
  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(char *string) {
    WP *help;
    bool success;
    if(free_==NULL)
	    assert(0);
   
    help=free_;
    free_=free_->next;
    strcpy(help->str,string);
    help->value=expr(string,&success);  
 
    int status;
    int cflags = REG_EXTENDED;
    regmatch_t pmatch[1];
    const size_t nmatch =1 ;
    regex_t reg;
    const char * pattern="\\$[eE][iI][pP][=][=]0x[0-9a-fA-F]{1,8}";
    regcomp(&reg,pattern,cflags);
    status=regexec(&reg,string,nmatch,pmatch,0);
    if(status == REG_NOMATCH)
  	help->type='w';
    else if(status ==0)
	help->type='b';

    help->Enb='Y';
    help->next=head;
    head=help;
    printf("The number is %d\n",help->NO); 
    return help;
}

void free_wp(int number) {
	WP *p,*q;
	q=NULL;
	p=head;
	while(p!=NULL&&p->NO!=number) {
		q=p;
		p=p->next;
	}
	if(p==NULL) assert(0);
	if(q==NULL) {
		head=head->next;
		p->value=0;
		memset(p->str,0,sizeof(p->str));
		p->type=' ';
		p->Enb='N';
		p->next=free_;
		free_=p;
	}
	else {
		q->next=p->next;
		p->value=0;
		memset(p->str,0,sizeof(p->str));
		p->type=' ';
		p->Enb='N';
		p->next=free_;
		free_=p;
	}
	printf("Free the %d\n",p->NO);
	return;
}

void print_wp() {
	printf("Num\tType\tEnb \t\t Value\t\t  What\n");
	for(int i=0;i<NR_WP;i++)
		printf("%4d\t%c\t%c\t\t0x%08x\t%s\n",wp_pool[i].NO,wp_pool[i].type,wp_pool[i].Enb,wp_pool[i].value,wp_pool[i].str);
}

int judge_wp() {
	WP* p;
	bool success;
	p=head;
	if(p==NULL)
		return 0;
	while(p) {
		p->newvalue=expr(p->str,&success);
		if(p->newvalue!=p->value) return -1;
		p = p->next;
	}
	return 0;
}