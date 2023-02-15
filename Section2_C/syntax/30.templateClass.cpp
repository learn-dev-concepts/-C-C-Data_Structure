#include <iostream>

using namespace std;

template<class T>
class Arithmetic
{
  private:
    T a;
    T b;
  
  public:
    Arithmetic(T a, T b);
    T add();
    T sub();
  };

  template<class T>
  Arithmetic<T>:: Arithmetic(T a, T b)
  {
    this->a = a;
    this->b = b;
  };

  template<class T>
  T Arithmetic<T>:: add()
  {
    T c;
    c = a + b;
    return c;
  };

  template<class T>
  T Arithmetic<T>:: sub()
  {
    T c;
    c = a - b;
    return c;
  };


int main ()
{
  Arithmetic<float> ar(10.2, 5);
  cout<<"ADD "<<ar.add()<<endl;
  cout<<"SUB "<<ar.sub()<<endl;

  Arithmetic<int> ar2(10, 5);
  cout<<"ADD "<<ar2.add()<<endl;
  cout<<"SUB "<<ar2.sub()<<endl;

  Arithmetic<char> ar3('B', 'A');
  cout<<"ADD "<<ar3.add()<<endl;
  cout<<"SUB "<<ar3.sub()<<endl;

  return 0;
}