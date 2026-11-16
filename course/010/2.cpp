#include <stdio.h>

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target;
  scanf("%d", &target);
  if (target > 10 || target < 1) {
    printf("Not Found\n");
  } else {
    int l = 0, r = 9;
    int mid;
    while (l < r) {
      mid = (l + r) >> 1;
      if (a[mid] == target) {
        printf("Index is %d\n", mid);
        break;
      }
      if (a[mid] > target) {
        r = mid - 1;
      } else {
        l = mid;
      }
    }
  }
  return 0;
}
