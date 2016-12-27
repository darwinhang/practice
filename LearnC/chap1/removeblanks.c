#include <stdio.h>

#define EMPTY_SPACE ' '
#define ADJACENT_SPACE 1
#define NO_ADJACENT_SPACE 0


/* replace 1 or more blanks with a single blank */
int main()
{
  int c;
  int adjacent_space = NO_ADJACENT_SPACE; 

  while ((c = getchar()) != EOF){
    if ((c == EMPTY_SPACE) && (adjacent_space == ADJACENT_SPACE)){
      continue;
    } else if (c != EMPTY_SPACE) {
      adjacent_space = NO_ADJACENT_SPACE;  // assign each time for now
    } else if (c == EMPTY_SPACE){
      adjacent_space = ADJACENT_SPACE;
    }
    putchar(c);
  }
}

