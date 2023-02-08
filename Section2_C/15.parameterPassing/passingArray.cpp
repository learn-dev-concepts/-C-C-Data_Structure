#include <iostream>

using namespace std;


int * fun(int size) 
{

  int *p;
  p = new int[size];

  for (int i = 0; i < size; i++) {
    p[i] = i + 1;
  }
  
  return p;

  // cout<<sizeof(A)/sizeof(int)<<endl; // pointer 8bytes int 4bytes

  // int i;
  // for(i = 0; i < n; i++) {
  //   cout<<A[i]<<endl;
  // }

  // A[0] = 15;
};

int main()
{
  int *ptr, sz =5;

  ptr = fun(sz);

  for (int i = 0; i < sz; i++) {
    cout<<ptr[i]<<endl;
  }

  return 0;
}