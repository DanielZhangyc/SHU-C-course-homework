#include <stdio.h>

int main() {
  printf("Enter a number:");
  int original;
  scanf("%d", &original);
  int digit[4];
  for (int i = 0; i < 4; i++) {
    digit[i] = ((original % 10) + 9) % 10;
    original /= 10;
  }
  printf("The encrypted number is %d%d%d%d", digit[1], digit[0], digit[3],
         digit[2]);
  return 0;
}
