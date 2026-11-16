#include <stdio.h>

int main() {
  for (int i = 100; i <= 999; i++) {
    int res = 0;
    int n = i;
    while (n != 0) {
      int digit = n % 10;
      res += digit * digit * digit;
      n /= 10;
    }
    if (res == i) {
      printf("%6d", i);
    }
  }
  return 0;
}
