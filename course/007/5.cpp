#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int len = 2 * n - 1;
  for (int i = 1; i <= n; i++) {
    int cnt = 2 * n - (2 * i - 1);
    for (int j = 1; j <= (len - cnt) / 2; j++)
      printf(" ");
    for (int j = 1; j <= cnt; j++)
      printf("*");
    printf("\n");
  }
  return 0;
}
