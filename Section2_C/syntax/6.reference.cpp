#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int &r = a;
  int *p = &r;

  cout<<r<<endl;
  cout<<a<<endl;
  cout<<p<<endl;

  int b = 25;
  r = b;

  cout<<r<<endl;
  cout<<a<<endl;

  return 0;
}