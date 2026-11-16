#include <stdio.h>

int main() {
  for (int chicken = 0; chicken <= 100; chicken += 3) {
    for (int hen = 0; hen + chicken <= 100; hen++) {
      int cock = 100 - hen - chicken;
      if (5 * cock + 3 * hen + chicken / 3 == 100) {
        printf("cock=%d,hen=%d,chicken=%d\n", cock, hen, chicken);
      }
    }
  }
  return 0;
}
