#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // short v1 = -3, v2 = 3;
  short v1, v2;
  scanf("%hi %hi", &v1, &v2);
  printf("res1 = %hi\n", v1 + v2);
  unsigned short v3 = 4, v4 = 5;
  printf("res2 = %hu\n", v3 * v4);

  int v5 = 3, v6 = -3;
  printf("res3 = %d\n", v5 / v6);
  unsigned int v7 = 0, v8 = 9;
  printf("res4 = %u\n", v7 * v8);

  long v9 = 120, v10 = 115;
  printf("res5 = %ld\n", v9 + v10);
  unsigned long v11 = 120, v12 = 6;
  printf("res6 = %lu\n", v11 / v12);

  float x = 5.6f, y = 7.54f;
  printf("res7 = %.2f\n", x * y);

  double a = 0.556664, b = 1.9;
  printf("res 8 = %.3g\n", a + b);

  char c = 'S';
  printf("res 9 = %c\n", c);

  bool z = true;
  printf("res10 = %d\n", z);

  return 0;
}