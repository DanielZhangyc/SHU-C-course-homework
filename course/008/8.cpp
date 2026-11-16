#include <stdio.h>

int main() {
  int n;
  bool fi = false;
  printf("Input an integer:");
  scanf("%d", &n);
  if (n == 1) {
    printf("1=1");
    return 0;
  }
  printf("%d=", n);
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      n /= i;
      if (!fi) {
        fi = true;
        printf("%d", i);
      } else {
        printf("*%d", i);
      }
    }
  }
  if (n > 0)
    printf("*%d", n);
  return 0;
}
