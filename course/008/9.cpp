#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= 2 * n - 1; i++) {
    int tmp = i;
    if (tmp >= n)
      tmp = 2 * n - tmp;
    for (int i = 1; i <= n - tmp; i++) {
      putchar(' ');
    }
    for (int i = 1; i <= 2 * tmp - 1; i++) {
      putchar('*');
    }
    printf("\n");
  }
  return 0;
}
