#include <stdio.h>

void tailRecursion(int n)
{
  if (n > 0)
  {
    printf("%d ", n);
    tailRecursion(n-1);
  }
};

void headRecursion(int n)
{
  if (n > 0)
  {
    headRecursion(n-1);
    printf("%d ", n);
  }
}


int main() {
  int x = 3;
  
  headRecursion(x);
  return 0;
}