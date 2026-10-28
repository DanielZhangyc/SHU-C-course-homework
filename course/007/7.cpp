#include <stdio.h>

int main() {
  char ch;
  do {
    ch = getchar();
    if (ch == ' ' || ('0' <= ch && ch <= '9'))
      continue;
    putchar(ch);
  } while (ch != '\n');
  return 0;
}
