#include <stdio.h>

// Tail Recursion
// every task execute during calling time only
// do nothing at all in returning time !!

void tailRecursion(int n) {
  if (n > 0) {
    printf("%d", n);
    fun(n - 1); // nothing execute in returning time
  }
}


// this do sth in returning time ! so it is not tail recursion
void notTailRecursion(int n) {
  if (n > 0) {
    printf("%d", n);
    fun(n - 1) + n; // plus n in returning phase
  }
}

// every recursion can be a loop vice versa recursion to loop
// loop vs tail recursion
// both have O(n) in time complexity
// but loop has O(1) and recursion has O(n) in space complexity
// so recommend to use loop than tail recursion
// and also some compilers changes tail recursion to loop in compile time~
void loopFun(int n) {
  while (n > 0) {
    printf("%d", n);
    n--;
  }
}

int main() {
  tailRecursion(3); // 3, 2, 1

  return 0;
}


