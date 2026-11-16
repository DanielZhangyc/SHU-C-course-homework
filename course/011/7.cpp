#include <stdio.h>

int main() {
  printf("Input n:");
  int n, a[9][9];
  scanf("%d", &n);
  printf("Input array:\n");
  bool ok = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      if (i > j && a[i][j] != 0) {
        ok = false;
      }
    }
  }
  printf("%s", (ok ? "YES" : "NO"));
  return 0;
}
