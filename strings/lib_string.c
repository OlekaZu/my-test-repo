#include "lib_string.h"

#include <stdio.h>
#include <string.h>

int main() {
  char str0[100] = "Helloy";
  s21_size_t i = 6;
  printf("s21_memchr: %p\n", s21_memchr(str0, 'y', i));
  printf("memchr: %p\n", memchr(str0, 'y', i));
  printf("%p\n", (char*)str0 + 6);

  return 0;
}

void* s21_memchr(const void* str, int c, s21_size_t n) {
  s21_size_t x;
  for (s21_size_t i = 0; i < n; i++) {
    if (*((unsigned char*)str + i) == c) {
      x = i;
      break;
    }
  }
  return (char*)str + x;
}

// int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
//     int res = 0;
//     for (s21_size_t i = 0; i < n; i ++) {
//         if (*((unsigned char*)str1 + i) != *((unsigned char*)str2 + i)) {
//             res = *((unsigned char*)str1 + i) - *((unsigned char*)str2 + i);
//             break;
//         }
//     }
//     return res;
// }

// void* s21_memcpy(void *dest, const void *src, s21_size_t n) {
//     unsigned char *d= dest;
//     const char *s = src;
//     for (s21_size_t i = 0; i < n; i ++) {
//         d[i] = s[i];
//     }
//     return d;
// }

// void* s21_memmove(void *dest, const void *src, s21_size_t n) {
//     unsigned char *d= dest;
//     const char *s = src;
//     if (*d <= *s) {
//         for (int i = 0; i < n; i ++){
//                 d[i] = s[i];
//         }
//     }
//     else {
//         for(int i = n; i > 0; i --){
//                 d[i-1]=s[i-1];
//         }
//     }
//     return d;
// }

// void* s21_memset(void *str, int c, s21_size_t n) {
//     for (s21_size_t i = 0; i < n; i ++) {
//         *((unsigned char*)str++) = c;
//     }
//     return str;
// }
