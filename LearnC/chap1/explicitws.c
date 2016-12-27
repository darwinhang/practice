#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'


/* replace tab with '\t', each backspace with '\b' and each backslash by '\\' */
int main()
{
 int c;

 while ((c = getchar()) != EOF){
  if (c == TAB){
    putchar('\\');
    putchar('t');
  } else if (c == BACKSPACE){
    putchar('\\');
    putchar('b');
  } else if (c == BACKSLASH){
    putchar('\\');
    putchar('\\');
  } else {
    putchar(c);
  }
 }
}
