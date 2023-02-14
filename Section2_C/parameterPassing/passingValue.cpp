#include <iostream>

using namespace std;

// even a and b changed, it doesn't affect to variables num1, num2;
// use passing value when u return sth
int add(int a, int b)
{
  int c;
  c = a + b;
  return c;
};

int main()
{
  int num1=10, num2=15, sum;
  sum = add(num1, num2);
  cout<<"Sum is "<<sum<<endl;

  return 0;
}