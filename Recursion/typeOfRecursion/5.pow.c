#include <stdio.h>

// invoke n + 1 times
int fun(int m, int n)
{
  if (n == 0)
  {
    return 1;
  } else 
  {
    return fun(m, n - 1) * m;
  }
}

// invoke logn + 2 times
int optimized(int m, int n) 
{
  if (n == 0) {
    return 1;
  } 
  if (n % 2 == 0) {
    return optimized(m * m, n /2);
  }
  return m * optimized(m * m, (n - 1) / 2);
}

int main() {

  int r = fun(2, 9);
  printf("%d\n", r);

  int k = optimized(2, 9);
  printf("%d\n", k);
  return 0;
}