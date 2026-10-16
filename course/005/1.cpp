#include <stdio.h>

int main() {
  double x;
  printf("Enter a number:");
  scanf("%lf", &x);
  int y = x == 0 ? 0 : x > 0 ? 1 : -1;
  printf("y=%d\n", y);
  return 0;
}
