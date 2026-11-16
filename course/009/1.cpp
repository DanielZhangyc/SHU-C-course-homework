#include <stdio.h>

int main() {
  printf("Input a&n:");
  int a, n;
  scanf("%d%d", &a, &n);
  long long s = 0;
  for (int i = 1; i <= n; i++) {
    s += a;
    a = a * 10 + a % 10;
  }
  printf("s=%lld", s);
  return 0;
}
