#include <stdio.h>

int main() {
  printf("Please input the number:");
  int cnt = 0;
  int n;
  scanf("%d", &n);
  printf("Inversed number is: ");
  do {
    printf("%d", n % 10);
    n /= 10;
    cnt++;
  } while (n != 0);
  printf("\nIt has %d bits.\n", cnt);
  return 0;
}
