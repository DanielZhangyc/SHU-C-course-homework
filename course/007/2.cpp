#include <stdio.h>

int main() {
  int n;
  int evenSum = 0, evenCnt = 0;
  int oddSum = 0, oddCnt = 0;
  do {
    scanf("%d", &n);
    if (n == 0)
      break;
    if (n % 2 == 0)
      evenSum += n, evenCnt++;
    else
      oddSum += n, oddCnt++;
  } while (n != 0);
  double evenAvg, oddAvg;
  evenAvg = (double)evenSum / (double)evenCnt;
  if (oddCnt != 0)
    oddAvg = (double)oddSum / (double)oddCnt;
  else
    oddAvg = 0;
  printf("Number of even:%d;Average of even:%.2lf\n", evenCnt, evenAvg);
  printf("Number of odd:%d;Average of odd:%.2lf\n", oddCnt, oddAvg);
  return 0;
}
