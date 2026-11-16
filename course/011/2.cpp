#include <stdio.h>
#define INF 100000
int main() {
  int n, a[10];
  printf("Input n:");
  scanf("%d", &n);
  printf("Input %d integers:", n);
  int maxx = -INF, minx = INF, maxidx = 0, minidx = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    if (a[i] > maxx) {
      maxx = a[i], maxidx = i;
    }
    if (a[i] < minx) {
      minx = a[i], minidx = i;
    }
  }
  a[maxidx] = a[n - 1], a[n - 1] = maxx;
  a[minidx] = a[0], a[0] = minx;
  printf("After swapped:");
  for (int i = 0; i < n; i++) {
    printf("%4d", a[i]);
  }
  return 0;
}
