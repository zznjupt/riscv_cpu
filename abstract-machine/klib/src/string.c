#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // panic("Not implemented");
  size_t len = 0;
  while((*s++) != '\0') len++;
  return len;
}

//add

size_t strnlen(const char *s, size_t n) {
  // panic("Not implemented");
  const char *s_;
  for (s_ = s; n-- && *s_ != '\0'; ++s_);
  return s_-s;
}

char *strcpy(char *dst, const char *src) {
  // panic("Not implemented");
  char *s = dst;
  while((*dst++ = *src++));
  return s;
}

char *strncpy(char *dst, const char *src, size_t n) {
  // panic("Not implemented");
  char *dscan;
  const char *sscan;
  size_t count;

  dscan = dst;
  sscan = src;
  count = n;
  while(count > 0) {
    --count;
    if((*dscan++ = *sscan++) == '\0') break;
  }
  while(count-- >0) *dscan++ = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  // panic("Not implemented");
  char *s = dst;
  while(*dst) dst++;
  while((*dst++ = *src++));
  return s; 
}

int strcmp(const char *s1, const char *s2) {
  // panic("Not implemented");
  while(*s1 != '\0' && *s1 == *s2) {
    s1++;
    s2++;
  }
  return (*(unsigned char *) s1) - (*(unsigned char *) s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // panic("Not implemented");
  if(n == 0) return 0;
  while(n-- != 0 && *s1 == *s2) {
    if(n == 0 || *s1 =='\0' || *s2 == '\0') break;
    s1++;
    s2++;
  }
  return (*(unsigned char *) s1) - (*(unsigned char *) s2);
}

void *memset(void *s, int c, size_t n) {
  // panic("Not implemented");
  char *s_ = (char *) s;
  for(int i = 0; i < n; i++) {
    *(s_ + i) = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
  // char       *s1 = dst;
  // const char *s2 = src;
  // if(s2 < s1 && s1 < s2 + n) {
  //   s2 += n;
  //   s1 += n;
  //   while(n--) * --s1 = * --s2;
  // } else {
  //   while(n--) * s1++ = * s2++;
  // }
  // return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  // panic("Not implemented");
  char *cin  = (char* )in;
  char *cout = (char* )out;
  for(int i = 0; i < n; i++) cout[i] = cin[i];
  return out; 
}

int memcmp(const void *s1, const void *s2, size_t n) {
  // panic("Not implemented");
  unsigned char *cs2  = (unsigned char* )s2;
  unsigned char *cs1  = (unsigned char* )s1;
  for(int i = 1; i < n; i++) {
    if(cs2[i] < cs1[i]) return -1;
    if(cs2[i] > cs1[i]) return 1;
  }
  return 0;
}

#endif
