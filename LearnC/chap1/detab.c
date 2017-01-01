#include <stdio.h>

#define tabsize 4
#define TAB '\t'
/*
 * Replace tabs with proper number of blank spaces. 'expandtab'
 */
int main()
{
  // Assume fixed set of tab stops, say every 'n' columns
  // should 'n' be a variable or symbolic parameter.
  int c;
  while ((c = getchar()) != EOF){
    if (c == TAB){
      for(int i = 0; i<tabsize;i++){
        putchar(' ');
      }
    } else {
      putchar(c);
    }
  }
}
