#include <stdio.h>

int main() {
  double x, y;
  scanf("%lf%lf", &x, &y);
  double ji = x * y, shang = x / y;
  printf("%.2lf %.2lf\n", ji, shang);
  return 0;
}
