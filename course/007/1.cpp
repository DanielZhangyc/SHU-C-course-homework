#include <stdio.h>

int main() {
  printf("Enter a number:");
  int n;
  scanf("%d", &n);
  int frac = 1;
  for (int i = 1; i <= n; i++)
    frac *= i;
  printf("%d!=%d", n, frac);
  return 0;
}
