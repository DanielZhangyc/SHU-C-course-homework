#include <stdio.h>

int main() {
  int cnt = 0;
  for (int i = 1; i <= 1000; i++) {
    if (i % 3 == 1 && i % 5 == 2 && i % 7 == 3) {
      printf("%5d", i);
      cnt++;
      if (cnt % 5 == 0)
        printf("\n");
    }
  }
  return 0;
}
