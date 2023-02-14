#include <stdio.h>
#include <iostream>
using namespace std;

int area (int length, int breadth)
{
  return length * breadth;
};

int perimeter(int length, int breadth)
{
  int p;
  p = 2 * (length + breadth);
  return p;
}

int main()
{

  // user interaction
  int length = 0, breadth = 0;

  printf("Enter Length and Breadth");
  cin>>length>>breadth;

  int a = area(length, breadth);
  int p = perimeter(length, breadth);

  // user interaction
  printf("Area=%d\nPerimeter=%d\n", a, p);

  return 0;
}