#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  double s = (double)(a + b + c) / 2;
  double S = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("%.3lf", S);
  return 0;
}
