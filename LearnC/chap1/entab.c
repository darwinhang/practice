#include <stdio.h>

#define tabstop 4

/* Replace strings of blanks by the minimum number of tabs and blanks
 * to achieve the same spacing. When either a tab or a single blank
 * would suffice to reach a tab stop, which should be given preference?
 */
int main()
{
  int c;
  int space_count = 0;
  while((c=getchar()) != EOF){
    if (c == ' '){
      space_count++;
      if (space_count == tabstop){ 
        space_count = 0;
        putchar('\t');
      }
    } else if ((c != ' ') && (space_count > 0)){
      for (; space_count>0; space_count--){ 
        putchar(' ');
      }
      putchar(c);
    } else {
      putchar(c);
    }
  }
}
