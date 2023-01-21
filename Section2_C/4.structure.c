#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
  int length; // 4 bytes
  int breadth; // 4 bytes
  char x; // 1byte but allocated 4bytes in this case - has padding
};

struct Rectangle2 {
  char x; // 1byte
  char y; // 1byte
  char z; // 1byte 
};

struct Rectangle r1;

int main() {

  // size
  struct Rectangle r2;
  struct Rectangle r3 = { 10, 5, 'S' };

  printf("%lu\n", sizeof(r3)); // 12bytes  not 9bytes

  struct Rectangle2 k1 = {'A', 'B', 'C'};
  printf("%lu\n", sizeof(k1)); // 3bytes


  // member

  struct Rectangle m1 = { 10, 3, 'a' };
  printf("length: %d, breadth: %d\n", m1.length, m1.breadth);
  m1.breadth = 100;
  printf("length: %d, breadth: %d", m1.length, m1.breadth);

  return 0;
};