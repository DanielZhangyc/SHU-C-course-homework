#include <stdio.h>

int main() {
  int n, a[29];
  scanf("%d", &n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    sum += a[i];
  }
  double ave = (double)sum / (double)n;
  printf("ave=%.2lf\n", ave);
  for (int i = 0; i < n; i++) {
    if (double(a[i]) < ave) {
      printf("%5d", a[i]);
    }
  }
  return 0;
}
