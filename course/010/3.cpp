#include <stdio.h>

int main() {
  int tb[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      tb[i][j] = (i + 1) * (j + 1);
    }
  }
  int n;
  printf("Input n:");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", tb[i][j]);
    }
    printf("\n");
  }
  return 0;
}
