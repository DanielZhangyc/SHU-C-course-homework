#include <stdio.h>

int main() {
  double a, b;
  char op;
  printf("Please type your expression: ");
  scanf("%lf%c%lf", &a, &op, &b);
  switch (op) {
  case '+':
    printf("%lf+%lf=%lf\n", a, b, a + b);
    break;
  case '-':
    printf("%lf-%lf=%lf\n", a, b, a - b);
    break;
  case '*':
    printf("%lf*%lf=%lf\n", a, b, a * b);
    break;
  case '/':
    if (b == (double)0)
      printf("division by zero!\n");
    else
      printf("%lf/%lf=%lf\n", a, b, a / b);
    break;
  default:
    printf("unknown operator.\n");
  }
  return 0;
}
