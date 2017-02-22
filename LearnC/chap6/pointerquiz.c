/*
 * Simple pointer experiments to get concepts
 */

#include <stdio.h>

int main()
{
  int x = 1, y = 2, z[10];
  int *int_ptr;

  int_ptr = &x;  // int_ptr now references the address of x
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of y is: %d\n", y);

  y = *int_ptr;  // dereferencing operator applied to int_ptr, so value accessed
  printf("Assign y to address of int_ptr\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of y is: %d\n", y);

  *int_ptr = 0;
  printf("Assign int_ptr to 0\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of y is: %d\n", y);

  printf("value of first element in z is: %d\n", z[0]);
  *int_ptr = z[0];
  printf("Assign value int_ptr points to be the element in z\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of y is: %d\n", y);

  (*int_ptr)++;
  printf("Increment the value int_ptr point to\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  *int_ptr++;
  printf("Increment the pointer int_ptr\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);


  printf("Assign int_ptr to address of 'x'\n");
  int_ptr = &x;
  printf("value of int_ptr is: %d\n", int_ptr);
  
  int_ptr = &z[0];
  printf("Assign int_ptr to first element in z\n");
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of y is: %d\n", y);
  int_ptr = z + 1;
  printf("value of int_ptr is: %d\n", int_ptr);
  printf("value of &z[1] is: %d\n", &z[1]);

  printf("value of z[1] is: %d\n", z[1]);
  *(z + 1) = 13; 
  printf("value of z[1] is: %d\n", z[1]);
  printf("Increment value int_ptr points at by 20\n");
  (*int_ptr) += 20;
  printf("value of z[1] is: %d\n", z[1]);


  *int_ptr = *(z + 0); // equivalent to assignment using square bracket notation
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);

  *int_ptr = *(z + 1); 
  printf("value of int_ptr is: %d\n", int_ptr);
  

  x = *(int_ptr + 1);
  printf("value of x is: %d\n", x);
  printf("value of int_ptr is: %d\n", int_ptr);

}
