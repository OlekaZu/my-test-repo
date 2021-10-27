#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // output figures from 1 to 9
  for (int i = 1; i < 10; i++) printf("%d\n", i);

  // output figures from 100 to 10, lag - j/2
  for (float j = 100; j > 10; j /= 2) printf("%.2f\n", j);

  // how work cycle while, input 1 for leaving out of cycle!
  bool isHasCar = true;
  int x = 0;
  while (isHasCar) {
    printf("Input number: ");
    scanf("%d", &x);
    if (x == 1) isHasCar = false;
  }

  // while instead for
  int k = 1;
  while (k < 10) {
    printf("%d\n", k);
    k++;
  }

  // how do while is working, once time will be always executed
  bool HasMoney = false;
  do {
    printf("yes\n");
  } while (HasMoney);

  // break using, we can use i again bc it's considered only between cycle's
  // brackets
  for (int i = 0; i < 50; i++) {
    if (i == 3) break;
    printf("%d\n", i);
  }

  // continue using, output of even numbers
  for (int i = 0; i <= 5; i++) {
    if (i % 2 != 0) continue;
    printf("%d\n", i);
  }

  // min, max finding
  int array[] = {1, 4, 0, -9, 7};
  int min = array[0];
  int max = array[0];
  for (int i = 0; i < 5; i++) {
    if (array[i] < min) min = array[i];
    if (array[i] > max) max = array[i];
    printf("%d ", array[i]);
  }
  printf("max = %d, min = %d\n", max, min);
  return 0;
}