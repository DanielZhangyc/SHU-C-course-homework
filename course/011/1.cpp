#include <stdio.h>

int main() {
  int n;
  printf("Input n:");
  scanf("%d", &n);
  n = n < 0 ? -n : n;
  int sum = 0, cnt = 0;
  do {
    sum += n % 10;
    n /= 10;
    cnt++;
  } while (n);
  printf("count=%d,sum=%d", cnt, sum);
  return 0;
}
