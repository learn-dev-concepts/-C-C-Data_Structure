#include <stdio.h>

int fact(int n) {
  if (n == 0) {
    return 1;
  }

  return fact(n - 1) * n;
}

int iFact (int n) {
  if (n == 0) {
    return 1;
  }

  int res = 1;
  int i = 1;
  while(i <= n) {
    res = res * i;
    i++;
  }

  return res;
}

int main () {
  int r;
  r = fact(4);
  printf("%d ", r);
  return 0;
}