#include <stdio.h>

int main() {
  int c;
  scanf("%d", &c);
  double f = (double)c * 9 / 5 + 32.0;
  printf("%.1lf", f);
  return 0;
}
