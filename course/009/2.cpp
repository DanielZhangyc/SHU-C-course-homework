#include <stdio.h>

int main() {
  int cnt = 0;
  for (int i = 1; i <= 1000; i++) {
    int n = i, tmp = i * i;
    while (n) {
      if (n % 10 != tmp % 10)
        break;
      n /= 10, tmp /= 10;
    }
    if (n == 0) {
      printf("%6d", i);
      cnt++;
      if (cnt % 5 == 0)
        printf("\n");
    }
  }
  return 0;
}
