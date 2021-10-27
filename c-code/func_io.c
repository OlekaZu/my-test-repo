#include <stdio.h>
#define NMAX 10

int input(int *data);
void output(int *data, int a);

int main(void) {
  int data[NMAX];
  // int k = input(data);
  output(data, input(data));
  return 0;
}

int input(int *data) {
  int n;
  printf("Input the number of massive's elements: ");
  scanf("%d", &n);
  printf("Input %d elements:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &data[i]);
  }
  return n;
}

void output(int *data, int a) {
  for (int i = 0; i < a; i++) {
    printf("%d ", data[i]);
  }
}