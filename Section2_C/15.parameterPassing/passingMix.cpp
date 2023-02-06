#include <iostream>

using namespace std;

void swap(int &a, int *b)
{
  cout<<"just a "<<a<<endl;
  

  int temp;
  temp = a;
  a = *b;
  *b = temp;
};

int main()
{
  int num1=10, num2=15, sum;

  swap(num1, num2);
  
  cout<<"First Number "<<num1<<endl;
  cout<<"Second Number "<<num2<<endl;

  return 0;
}