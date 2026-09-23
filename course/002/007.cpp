#include <cstdio>
#include <stdio.h>

int main() {
  printf("Input a lowercase letter:");
  char ch = getchar();
  printf("A capital letter:");
  putchar(ch - 'a' + 'A');
  return 0;
}
