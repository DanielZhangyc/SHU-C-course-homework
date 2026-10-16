#include <cmath>
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("Infinite roots!\n");
        return 0;
      } else {
        printf("No roots!\n");
        return 0;
      }
    }
    double sol = (double)-c / (double)b;
    printf("Single root: %lf\n", sol);
    return 0;
  }
  int delta = b * b - 4 * a * c;
  double base = (double)-b / (double)(2 * a);
  if (delta == 0) {
    printf("Single root: %lf\n", base);
  }
  if (delta > 0) {
    double d = sqrt(delta) / (double)(2 * a);
    printf("Real roots: %lf and %lf\n", base + d, base - d);
  } else {
    double d = sqrt(-delta) / (double)(2 * a);
    printf("Complex roots: %lf+%lfi, %lf-%lfi\n", base, d, base, d);
  }
  return 0;
}
