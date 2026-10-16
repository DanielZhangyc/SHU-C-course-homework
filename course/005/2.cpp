#include <stdio.h>

int main() {
  printf("Enter one character:");
  char ch;
  scanf("%c", &ch);
  if ('a' <= ch && ch <= 'z')
    ch = ch - 'a' + 'A';
  else if ('A' <= ch && ch <= 'Z')
    ch = ch - 'A' + 'a';
  putchar(ch);
  return 0;
}
