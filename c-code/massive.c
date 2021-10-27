#include <stdio.h>

int main(void) {
  int arr[] = {1, 4, 8, 10};  // declare single-dimension massive
  arr[2] = 88;
  printf("%d\n", arr[2]);

  float arr2[3];  // declare single-dimension massive
  arr2[0] = 5.5f;
  arr2[1] = 3.43f;
  arr2[2] = 0.9f;
  printf("%.2f\n", arr2[1]);

  //  declare symbols single-dimension massive
  char letter[] = {'s', 'o', 'm', 'e', '\0'};  // leave terminal 0 in the end
  printf("%s\n", letter);
  char words[] = "Hello world!";
  words[0] = 'G';
  printf("%s\n", words);
  printf("%c\n", words[0]);

  // declare 2-dimensional massive
  int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  printf("%d\n", array[2][1]);
  return 0;
}