#include <stdio.h>
long long frac(int n) {
  long long res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}
int main() {
  int n;
  scanf("%d", &n);
  printf("%lld\n", frac(n));
  return 0;
}
