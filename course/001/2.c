#include <stdio.h>

int main() {
  double r, s;
  printf("请输入圆的半径：");
  scanf("%lf", &r);
  s = 3.141592653 * r * r;
  printf("圆的面积为：%.2f\n", s);
  return 0;
}
