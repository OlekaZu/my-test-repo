#include <stdio.h>
#include <string.h>
#define NMAX 8

struct Planet {
  int number;
  char name[50];
  double mass;
};

int main(void) {
  struct Planet Mercury;
  Mercury.number = 1;
  strcpy(Mercury.name, "Меркурий");  // Mercury.name = "Меркурий" doesn't work!
  Mercury.mass = 34.98312f;

  struct Planet Venus = {2, "Венера", 54.23159f};
  printf("%s - %d планета от Солнца, масса %lf\n", Mercury.name, Mercury.number,
         Mercury.mass);
  printf("%s - %d планета от Солнца, масса %lf\n", Venus.name, Venus.number,
         Venus.mass);

  return 0;
}