#include <math.h>
#include <stdio.h>

int main() {
  double result1 = 0;
  result1 = INFINITY / 0;
  double result2 = 0;
  result2 = INFINITY / 5;
  double result3 = 0;
  result3 = INFINITY / (-5);
  double result4 = -INFINITY / NAN;
  printf("%lf\n %lf\n %lf\n %lf\n", result1, result2, result3, result4);

  double result5 = 0;
  result5 = 0 / -INFINITY;
  double result6 = 0;
  result6 = 5 / -INFINITY;
  double result7 = 0;
  result7 = (-5) / -INFINITY;
  printf("%lf\n %lf\n %lf\n", result5, result6, result7);
  return 0;
}