#include <stdio.h>

#define IN 1
#define OUT 0

/* Exercise 1-12. Write a program that prints its inpus
 * one word per line. 
 */
int main()
{
  int c;
  int state = OUT;

  while((c=getchar()) != EOF){
    // TODO: clean up this logic
    if ((state == OUT) && (c == ' ' || c == '\t' || c == '\n')){
      continue;
    } else if (c == ' ' || c == '\t'){
      state = OUT;
      putchar('\n');
    } else {
      state = IN;
      putchar(c);
    }
  }
  return 0;
}
