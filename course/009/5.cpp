#include <stdio.h>

int main() {
  printf("Please select I number to be printed:\n");
  int n;
  scanf("%d", &n);
  long long fib[101];
  fib[1] = 1;
  fib[2] = 1;
  for (int i = 3; i <= n; i++)
    fib[i] = fib[i - 1] + fib[i - 2];
  printf("The number is %lld", fib[n]);
  return 0;
}
