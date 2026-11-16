#include <stdio.h>
int main() {
  double a, b, c;
  bool out = false;
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a < b) {
    double t = a;
    a = b, b = t;
  }
  if (b < c) {
    double t = b;
    b = c, c = t;
  }
  if (a < b) {
    double t = a;
    a = b, b = t;
  }
  if (b + c <= a) {
    printf("not triangle\n");
    return 0;
  }
  if (b * b + c * c == a * a) {
    printf("right triangle\n");
    out = true;
  }
  if (b == c) {
    if (a == b) {
      printf("equilateral triangle\n");
      out = true;
    } else {
      printf("isosceles triangle\n");
      out = true;
    }
  }
  if (!out) {
    printf("arbitrary triangle\n");
  }
  return 0;
}
