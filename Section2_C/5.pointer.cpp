#include <iostream> // c++
#include <stdio.h> // c
#include <stdlib.h> // c
using namespace std;

/**
 * point use 8bytes
 * 
 * why use the pointer
 * 1. access to heap
 * 2. access to resource ( hard_disk, network)
 * 3. parameter passing
*/

int main() {
  int *p;
  p = (int *)malloc(5 * sizeof(int));
  p[3] = 1;

  printf("array %d", p);

  free(p);

  printf("array %d", p);

  

   return 0;
}

int dynamic_arr_cpp() {
  int *p;
  p = (int *)malloc(5 * sizeof(int));
  p[3] = 1;

  int *arr_cpp;
  arr_cpp = new int[5];

  int i;
  for (i = 0; i < 5; i++) {
    cout<<p[i]<<endl;
  }

  delete [ ] p;
  
  return 0;
}

int array() {

  int A[5] = {1,2,3,4,5};
  int *array;
  array = A;
  
  int *element;
  element = &A[0];

  printf("array %d\n", array);
  printf("element %d\n", element);


  int i;
  for (i = 0; i < 5; i++) {
    cout<<A[i]<<endl;
  }

  int j;
  for (j = 0; j < 5; j++) {
    cout<<array[j]<<endl;
  }

  return 0;
}

int primatives() {
  
  int a = 10;
  int *p; // declaration
  p = &a; // assignment

  cout<<a<<endl;
  cout<<p<<endl;

  printf("using pointer %d\n", *p); // value
  printf("using pointer %d\n", p); // address

  return 0;
}

