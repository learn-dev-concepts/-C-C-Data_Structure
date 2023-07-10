#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;

  // method1
  // stack area
  int A[3][4] = { {1,2,3,4}, {5,6,7,8}, {9, 10, 11, 12}};

  // for (i = 0; i < 3; i++) {
  //   for (j = 0; j < 4; j++) {
  //     printf("%d ", A[i][j]);
  //   }
  //     printf("\n");
  // }


  // method2
  // B is in stack, array is in heap
  // make an array in heap by new keyword
  int *B[3];
  B[0] = (int *)malloc(4 * sizeof(int));
  // B[0] = new int[4];
  
  B[1] = (int *)malloc(4 * sizeof(int));
  // B[1] = new int[4];
  
  B[2] = (int *)malloc(4 * sizeof(int));
  // B[2] = new int[4];

  

  // for (i = 0; i < 3; i++) {
  //   for (j = 0; j < 4; j++) {
  //     printf("%d ", B[i][j]);
  //   }
  //     printf("\n");
  // }

  // method3
  int **C;
  C = (int **)malloc(3 * sizeof(int));
  // C = new int*[3];
  
  C[0]= (int *)malloc(4 * sizeof(int));
  // C[0] = new int[4];
  
  C[1]= (int *)malloc(4 * sizeof(int));
  // C[1] = new int[4];
  
  C[2]= (int *)malloc(4 * sizeof(int));
  // C[2] = new int[4];

 for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", C[i][j]);
    }
      printf("\n");
  }




  return 0;
}