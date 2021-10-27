#include "functions.h"

int main(void) {
  sum(40, 60);
  int x = 2, y = 1;
  sum(x, y);
  string("Hello!");
  char word[] = {'1', '3', '5'};
  string(word);
  float result = mult(3.2f, 1.5f);
  printf("%.3f\n", result);
  return 0;
}