#include <stdio.h>

int main() {
  int n;
  printf("Input length (N<=100):\n");
  scanf("%d", &n);
  int a[101];
  int maxx = 0, minx = 1 << 30;
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    if (a[i] > maxx)
      maxx = a[i];
    if (a[i] < minx)
      minx = a[i];
  }
  printf("The max is %d\nThe min is %d", maxx, minx);
  return 0;
}
