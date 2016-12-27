#include <stdio.h>

/* copy input to output */
int main() 
{
  int c;
  // printf("%d\n", EOF); // exercise 1-7, prints '-1' on my machine

  while ((c = getchar()) != EOF) {  
  /* while (1) {  
   *   printf("%d", getchar() != EOF);
   *   // exercise 1-6, verify that `getchar() ~= EOF` returns 1 or 0,
   *   // still have verified 0.
   */
    putchar(c); 
  }
}
