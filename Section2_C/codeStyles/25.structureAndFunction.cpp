#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle 
{
  int length;
  int breadth;
};

// C
int area (struct Rectangle r)
{
  return r.length * r.breadth;
};

// CPP
int perimeter(Rectangle r)
{
  int p;
  p = 2 * (r.length + r.breadth);
  return p;
}

void initialize(struct Rectangle *r, int l, int b)
{
  r->length = l;
  r->breadth = b;
}

int main()
{

  // user interaction
  Rectangle r = {0, 0};

  int l,b;
  printf("Enter Length and Breadth");
  cin>>l>>b;

  initialize(&r, l, b);

  int a = area(r);
  int p = perimeter(r);

  // user interaction
  printf("Area=%d\nPerimeter=%d\n", a, p);

  return 0;
}