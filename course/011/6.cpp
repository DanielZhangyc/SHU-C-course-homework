#include <stdio.h>
#define N 4
int main() {
  int a[N][N];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += a[i][i] + a[i][3 - i];
  }
  printf("sum=%d", sum);
  return 0;
}
