#include <stdio.h>

int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  int he = x + y, cha = x - y, ji = x * y, shang = x / y, yushu = x % y;
  printf("he=%d\ncha=%d\nji=%d\nshang=%d\nyushu=%d\n", he, cha, ji, shang,
         yushu);
  return 0;
}
