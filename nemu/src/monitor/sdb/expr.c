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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>

static const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

enum {
  TK_NOTYPE = 256,
  /* TODO: Add more token types */
  TK_EQ,
  TK_UEQ,
  TK_logical_AND,
  TK_logical_OR,
  TK_logical_NOT,
  TK_register,
  TK_variable,
  TK_number,
  TK_hex,
  TK_pc
};
static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {" +",     										  TK_NOTYPE},      		// spaces
  {"==",     										  TK_EQ},          		// equal
  {"\\(",    										  '('},           		// left parenthesis
  {"\\)",    										  ')'},           		// right parenthesis
  {"\\*",    										  '*'},           		// multiplication
  {"/",      										  '/'},             	// division
  {"\\+",    										  '+'},            		// plus
  {"-",      										  '-'},             	// subtraction
  {"!=",     										  TK_UEQ},          	// unequal
  {"&&",     										  TK_logical_AND}, 		// logical AND  
  {"\\|\\|",									      TK_logical_OR},  		// logical OR  
  {"!",      										  TK_logical_NOT},      // logical NOT  
  {"0[xX][A-Fa-f0-9]{1,8}",                           TK_hex},              // hex  
  {"\\$0|(ra)|(s|g|t)p|t[0-6]|a[0-7]|s(11|10|[0-9])", TK_register},         // rv64 register
  {"\\$[Pp][Cc]",                                     TK_pc},               // PC
  {"[a_zA_Z_][a-zA-Z0-9_]*",                          TK_variable},         // variable  
  {"[0-9]{1,10}",                                     TK_number}            // number
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}
typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
			case 257: tokens[nr_token].type=257; strcpy(tokens[nr_token].str,"=="); break;
			case 40:  tokens[nr_token].type=40;  break;
			case 41:  tokens[nr_token].type=41;  break;
			case 42:  tokens[nr_token].type=42;  break;
			case 47:  tokens[nr_token].type=47;  break;
			case 43:  tokens[nr_token].type=43;  break;
			case 45:  tokens[nr_token].type=45;  break;
			case 258: tokens[nr_token].type=258; strcpy(tokens[nr_token].str,"!="); break;
			case 259: tokens[nr_token].type=259; strcpy(tokens[nr_token].str,"&&"); break;
			case 260: tokens[nr_token].type=260; strcpy(tokens[nr_token].str,"||"); break;
			case 261: tokens[nr_token].type=261; break;
			case 262: tokens[nr_token].type=262; strncpy(tokens[nr_token].str, &e[position-substr_len],substr_len); break;
			case 263: tokens[nr_token].type=263; strncpy(tokens[nr_token].str, &e[position-substr_len],substr_len); break;
			case 264: tokens[nr_token].type=264; strncpy(tokens[nr_token].str, &e[position-substr_len],substr_len); break;
			case 265: tokens[nr_token].type=265; strncpy(tokens[nr_token].str, &e[position-substr_len],substr_len); break;
			case 266: tokens[nr_token].type=266; break;
			default:  nr_token--;                break;          
        }
        nr_token++;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  nr_token--;
  return true;
}

bool check_parentheses(int p,int q) {
  int left=0; 
  int flag=0;
  if(tokens[p].type == 40) {
    left++;
    for(int i = p+1; i <= q; i++) {
      if(tokens[i].type == 40) {
	      left++;
      }
      else if(tokens[i].type == 41) {
	      left--;
	      if(left == 0 && i != q) flag = 1;
	      if(left<0) assert(0);
      }
    }
    if(left==0&&tokens[q].type==41&&flag!=1) return 1;
    else if(left==0) return 0;
    else assert(0);
  }
  else return 0;
}

int find_dominant_operator(int p,int q) {
	int theop=p;
	int j=p;
	int r=0;
	for(;j<=q;j++) {
		if(tokens[j].type<262&&tokens[j].type!='!') {
			if(tokens[j].type==40) {
				r++;
				for(j=j+1;tokens[j].type!=41||r!=1;j++) {
					if(tokens[j].type==40) r++;
					if(tokens[j].type==41) r--;
				}
				r=0;
			}
			else if(tokens[j].type==260) theop=j;
			else if(tokens[j].type==259&&(tokens[theop].type<260||tokens[theop].type>=262)) theop=j;
			else if(tokens[j].type==258&&(tokens[theop].type<259||tokens[theop].type>=262)) theop=j;
			else if(tokens[j].type==257&&(tokens[theop].type<258||tokens[theop].type>=262)) theop=j;
			else if(tokens[j].type=='+'&&(tokens[theop].type<256||tokens[theop].type>=261)) theop=j;
			else if(tokens[j].type=='-'&&(j==p||tokens[j-1].type>=256||tokens[j-1].type==')')&&(tokens[theop].type<256||tokens[theop].type>=261)) theop=j;
			else if(tokens[j].type=='/'&&(tokens[theop].type>=261||tokens[theop].type=='('||tokens[theop].type=='*'||tokens[theop].type=='/')) theop=j;
			else if(tokens[j].type=='*'&&(j==p||(tokens[j-1].type>=256||tokens[j-1].type==')'))&&(tokens[theop].type>=261||tokens[theop].type=='('||tokens[theop].type=='*'||tokens[theop].type=='/')) theop=j;			
		}
	}
	return theop;
}


int eval(int p, int q) {
	int i=0;
	if(p > q) assert(0);
	else if(p==q) {
		// 十进制数
		if(tokens[p].type==264)	{        
			sscanf(tokens[p].str, "%d", &i); 
			return i;
		}
		// 16进制数
		else if(tokens[p].type == 265) { 
			sscanf(tokens[p].str, "%x", &i); 
			return i;		
		}
		// 寄存器（需要debug）
		else if(tokens[p].type == 262) {
			int j = 0, s = 1;
			for(; j < 32 && s != 0; j++) s = strcmp(tokens[p].str + 1, regs[j]); 		
			if(s == 0) {	
				i = cpu.gpr[j]; 
				return i;
			}
			// if(j==32) assert(0);
			if(j==32)printf("DEBUG register!\n");
		}
		else if(tokens[p].type==266) return cpu.pc;
		else assert(0);
	}
	else if(check_parentheses(p,q)==true) return eval(p+1,q-1);
	else {
		int op,val1,val2;
		if((q-p==1)&&tokens[p].type=='-') return 0-eval(q,q);
		if(((q-p==1)||(tokens[p+1].type=='('&&tokens[q].type==')'))&&tokens[p].type==261) {
			i=eval(p+1,q);
			return !i;
		}
		if(((q-p==1)||(tokens[p+1].type=='('&&tokens[q].type==')'))&&tokens[p].type=='*') {
			return vaddr_read(eval(p+1,q),4);	
		}
		op=find_dominant_operator(p,q);
		val1=eval(p,op-1);
		val2=eval(op+1,q);
		switch(tokens[op].type) {
			case '+':return val1+val2;
			case '-':return val1-val2;
			case '*':return val1*val2;
			case '/':return val1/val2;
			case 257:
				if(val1 == val2) return 1;
				else return 0;
			case 258:
				if(val1 != val2) return 1;
				else return 0;
			case 259:
				if(val1 && val2) return 1;
				else return 0;
			case 260:
				if(val1 || val2) return 1;
				else return 0;
			default: assert(0);
		}
	}
	return 0;
}



word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int a;
  a = eval(0,nr_token);
  return a;
}
