#include <iostream>

using namespace std;

// *a is pointer; => * again is value
// &num is address of actual parameter


// it modify actual parameter, it doesn't return;
// 
void swap(int *a, int *b)
{
  cout<<"just a "<<a<<endl;
  cout<<"aster *a "<<*a<<endl;

  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
};

int main()
{
  int num1=10, num2=15, sum;

  cout<<"just num "<<num1<<endl;
  cout<<"enpercent &num "<<&num1<<endl;

  swap(&num1, &num2);
  
  cout<<"First Number "<<num1<<endl;
  cout<<"Second Numbe r"<<num2<<endl;

  return 0;
}