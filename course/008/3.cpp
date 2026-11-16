#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long ans = 1;
  for (int i = 1; i <= n - 1; i++) {
    ans = 2 * ans + 2;
  }
  printf("%lld\n", ans);
  return 0;
}
