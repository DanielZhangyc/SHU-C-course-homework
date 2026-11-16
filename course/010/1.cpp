#include <stdio.h>

int main() {
  int a[10];
  for (int i = 0; i < 10; i++)
    scanf("%d", a + i);
  int target;
  scanf("%d", &target);
  int i;
  for (i = 0; i < 10; i++) {
    if (a[i] == target) {
      printf("Index is %d", i);
      break;
    }
  }
  if (i == 10) {
    printf("Not Found");
  }
  return 0;
}
