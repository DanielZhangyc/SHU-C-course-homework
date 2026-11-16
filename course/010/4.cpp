#include <stdio.h>

int main() {
  int a[3][2];
  printf("Enter 6 integers:\n");
  int maxx = -(1 << 30);
  int c, r;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      scanf("%d", &a[i][j]);
      if (a[i][j] > maxx) {
        c = i, r = j, maxx = a[i][j];
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%4d", a[i][j]);
    }
    printf("\n");
  }
  printf("max=a[%d][%d]=%d", c, r, maxx);
  return 0;
}
