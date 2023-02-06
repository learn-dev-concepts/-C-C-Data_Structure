#include <iostream>

using namespace std;

// reference in cpp is kind a nickname of variable
// there are two way of compling depend on complier
// one is treat swap function as inline function and change &a to num1
// the other is handle &a as pointer
// anyway it brings convenience to programmers
void swap(int &a, int &b)
{
  cout<<"just a "<<a<<endl;
  

  int temp;
  temp = a;
  a = b;
  b = temp;
};

int main()
{
  int num1=10, num2=15, sum;

  swap(num1, num2);
  
  cout<<"First Number "<<num1<<endl;
  cout<<"Second Number "<<num2<<endl;

  return 0;
}