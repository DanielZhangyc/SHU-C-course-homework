#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long prea = 1, preb = 1;
  long long cur = 0;
  for (int i = 1; i <= n; i++) {
    if (i <= 2) {
      printf("%8d", 1);
    } else {
      cur = prea + preb;
      prea = preb, preb = cur;
      printf("%8lld", cur);
    }
    if (i % 5 == 0)
      printf("\n");
  }
  return 0;
}
