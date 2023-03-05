#include <stdio.h>

int sum(int n) {
  if (n == 0) {
    return 0;
  }

  return sum(n - 1) + n;
}

int iSum (int n) {
  if (n == 0) {
    return 0;
  }

  int res = 0;
  int i = 1;
  while(i <= n) {
    res = res + i;
    i++;
  }

  return res;
}

int main () {
  int r;
  r = iSum(5);
  printf("%d ", r);
  return 0;
}