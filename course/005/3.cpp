#include <stdio.h>
int main() {
  printf("请输入年份：");
  int year;
  scanf("%d", &year);
  bool leap = year % 400 == 0 ? 1 : (year % 4 == 0 && year % 100) ? 1 : 0;
  if (leap)
    printf("%d年是闰年", year);
  else
    printf("%d年不是闰年", year);
  return 0;
}
