#include <stdio.h>

int main() {
  int a[10];
  for (int i = 0; i < 10; i++)
    scanf("%d", a + i);
  int target;
  scanf("%d", &target);
  int cnt = 0;
  int idxs[10];
  int i;
  for (i = 0; i < 10; i++) {
    if (a[i] == target) {
      idxs[cnt++] = i;
    }
  }
  if (cnt == 0) {
    printf("Not Found");
  } else {
    printf("Index is:");
    for (int i = 0; i < cnt; i++) {
      printf("%3d", idxs[i]);
    }
  }
  return 0;
}
