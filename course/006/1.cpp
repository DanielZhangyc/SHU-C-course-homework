#include <stdio.h>

int main() {
  char ch;
  int cnt = 0;
  do {
    ch = getchar();
    if ('0' <= ch && ch <= '9') {
      cnt++;
      printf("%c ", ch);
    }
  } while (ch != '\n');
  printf("\nThere are %d digits!\n", cnt);
  return 0;
}
