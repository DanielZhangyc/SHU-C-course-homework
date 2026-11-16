#include <stdio.h>
#define N 4
int main() {
  int a[N][N];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      a[i][j] = i + j;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%3d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
