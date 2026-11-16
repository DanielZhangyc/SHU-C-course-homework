#include <stdio.h>

int main() {
  double a[10];
  printf("Please insert 10 scores:\n");
  double sum = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%lf", a + i);
    sum += a[i];
  }
  printf("The average is:%.2lf", sum / 10);
  return 0;
}
