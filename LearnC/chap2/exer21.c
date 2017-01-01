#include <stdio.h>
#include <limits.h>

int main()
{
  // determine size of standard types on this machine
  signed int a;
  signed short b;
  signed char c;
  signed long d;
  unsigned int e;
  unsigned short f;
  unsigned char g;
  unsigned long h;

  float i; 
  double j;
  long double k;

  printf("size of signed int in bytes: %lu\n", sizeof(a));
  printf("size of signed short in bytes: %lu\n", sizeof(b));
  printf("size of signed char in bytes: %lu\n", sizeof(c));
  printf("size of signed long in bytes: %lu\n", sizeof(d));
  printf("size of unsigned int in bytes: %lu\n", sizeof(e));
  printf("size of unsigned short in bytes: %lu\n", sizeof(f));
  printf("size of unsigned char in bytes: %lu\n", sizeof(g));
  printf("size of unsigned long in bytes: %lu\n", sizeof(h));

  printf("size of float in bytes: %lu\n", sizeof(i));
  printf("size of double in bytes: %lu\n", sizeof(j));
  printf("size of long in bytes: %lu\n", sizeof(k));
}
