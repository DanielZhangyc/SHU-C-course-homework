#include <stdio.h>

int main() {
  for (int i = 1; i <= 1000; i++) {
    int res = 0;
    for (int j = 1; j < i; j++) {
      if (i % j == 0)
        res += j;
    }
    if (res == i)
      printf("%6d", i);
  }

  return 0;
}
