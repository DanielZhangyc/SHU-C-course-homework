#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      for (int j = 1; j <= 2 * n - 1; j++) {
        if (j % 2)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
      continue;
    }
    int idx1 = i, idx2 = 2 * n - i;
    for (int j = 1; j <= idx2; j++) {
      printf("%c", (j == idx1 || j == idx2 ? '*' : ' '));
    }
    printf("\n");
  }
  return 0;
}
