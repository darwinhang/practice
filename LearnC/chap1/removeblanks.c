#include <stdio.h>

#define EMPTY_SPACE ' '

/* replace 1 or more blanks with a single blank */
int main()
{
  int c;
  int adjacent_space = 0;

  while ((c = getchar()) != EOF){
    if ((c == EMPTY_SPACE) && (adjacent_space == 1)){
      continue;
    } else if (c != EMPTY_SPACE) {
      adjacent_space = 0;  // assign each time for now
    } else if (c == EMPTY_SPACE){
      adjacent_space = 1;
    }
    putchar(c);
  }
}

