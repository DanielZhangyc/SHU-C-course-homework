#include <stdio.h>

int main() {
  int res = 0;
  for (int i = 1; i <= 99; i += 2) {
    res += i;
  }
  printf("sum=%d", res);
  return 0;
}
