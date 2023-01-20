#include <stdio.h>
#include <stdlib.h>


int main() {
 
 int A[] = { 10, 9, 3, 5 };  // 4 bytes for each index
 printf("%lu\n", sizeof(A)); // 12 bytes;

 int B[10] = { 1, 2, 3, 4, 5, 6, 7 }; // B = [1, 2, 3, 4, 5, 6, 7, 0, 0, 0]
 printf("%d\n", B[9]); // empty indices are filled with 0

 int C[4] = { 0, 1 };
 int i;

 for (i = 0; i < 4; i++ ) {
  printf("%d\n", C[i]);
 }


 return 0;
};
