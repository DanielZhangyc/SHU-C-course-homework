#include <stdio.h>

int main() {
  printf("Input n:");
  int n;
  int a[109][109];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      printf("    ");
    }
    for (int j = i; j < n; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
