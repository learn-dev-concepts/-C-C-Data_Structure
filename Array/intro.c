#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p = (int *)malloc(5 * sizeof(int));
  int i;

  for (i = 0; i < 5; i++) {
    p[i] = i + 1;
  }

  int *q = (int *)malloc(10 * sizeof(int));

  for (i = 0; i < 5; i++) {
    q[i] = p[i];
  }
  
  printf("b4 %d \n", p[100]);
  free(p);
  printf("a4 %d \n", p[100]);
  p = q;
  q = NULL;

  

  return 0;
};

