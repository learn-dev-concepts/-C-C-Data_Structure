#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

void byValue(struct Rectangle r)
{
  r.length = 20;
  cout<<"Length"<<r.length<<endl;
  cout<<"Breadth"<<r.breadth<<endl;
};

void byAddress(struct Rectangle *r)
{
  r->length = 50;
  cout<<"Length"<<r->length<<endl;
  cout<<"Breadth"<<r->breadth<<endl;
};

int basic()
{
  struct Rectangle r = { 10, 5 };

  byAddress(&r);
  printf("Length: %d \nBreadth: %d\n", r.length, r.breadth);
  return 0;
}


struct Rectangle * fun()
{
  struct Rectangle *p;
  // p = new Rectangle;
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

  p->length = 15;
  p->breadth =71;

  return p;
}

int main()
{
  struct Rectangle *r;
  r = fun();
  printf("Length: %d \nBreadth: %d\n", r->length, r->breadth);
  return 0;
}

