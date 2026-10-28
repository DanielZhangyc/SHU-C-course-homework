#include <cmath>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int i;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}
