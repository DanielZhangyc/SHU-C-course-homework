#include <stdio.h>

int main() {
  printf("Input m,n:");
  int m, n;
  scanf("%d%d", &m, &n);
  while (m < 0 || n < 0) {
    printf("Input again!\n");
    scanf("%d%d", &m, &n);
  }
  int g, l;
  int a = m, b = n;
  while (a % b != 0) {
    int r = a % b;
    a = b, b = r;
  }
  g = b;
  l = m * n / g;
  printf("%d和%d的最大公约数:%d\n", m, n, g);
  printf("%d和%d的最小公倍数:%d\n", m, n, l);
  return 0;
}
