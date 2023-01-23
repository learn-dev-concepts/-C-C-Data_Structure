#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
  int height;
};

int main() {
  struct Rectangle *p;
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // new Rectangle
  p->breadth = 10;
  p->length = 20;
  
   
  return 0;
}

int howToAssignStructOnPointer() {
  struct Rectangle r = { 10, 1, 2 }; 
  struct Rectangle *p = &r;

  r.length = 15;
  cout<<r.length<<endl;

  (*p).length = 300;
  cout<<r.length<<endl;

  p->length = 1000;
  cout<<r.length<<endl; 

  return 0;
}


