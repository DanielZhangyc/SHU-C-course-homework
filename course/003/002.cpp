#include <math.h>
#include <stdio.h>

int main() {
  printf("Enter money,year and rate:");
  int money, year;
  double rate;
  scanf("%d%d%lf", &money, &year, &rate);
  double interest = (double)money * pow(1 + rate, year) - (double)money;
  printf("interest=%.2lf", interest);
  return 0;
}
