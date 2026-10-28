#include <cmath>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int d = log10(n) + 1;
  int l, r;
  for (l = (d + 1) / 2, r = (d + 2) / 2; l >= 1 && r <= d; l--, r++) {
    int a = (n % (int)pow(10, l)) / (int)pow(10, l - 1);
    int b = (n % (int)pow(10, r)) / (int)pow(10, r - 1);
    if (a != b) {
      printf("%d不是回文", n);
      return 0;
    }
  }
  printf("%d是回文", n);
  return 0;
}
