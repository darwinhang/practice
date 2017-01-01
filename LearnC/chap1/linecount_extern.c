#include <stdio.h>
#define MAXLINE 1000  /* maximum input line size */

int max;    /* maximum length seen so far */
char line[MAXLINE];  /* current input line */
char longest[MAXLINE];   /* longest line saved here */

// had to change the name of the func from getline to getlinelen
// so it doesn't clash with a func from the standard library
int getlinelen(char line[], int maxline);
void copy(char to[], char from[]);
// the '\0' is the null char, whose value is zero 

/* print longest input line */
int main()
{
  int len;    /* current line length */
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getlinelen()) > 0) {
      if (len > max) {
          max = len;
          copy();
      }
  }
  if (max > 0) {   /* there was a line */
      printf("%s", longest); 
  }
  return 0;
}

/* getlinelen: read a line into s, return length */
int getlinelen(void)  // 'void' is used for explicitly empty list, for older C compatability
{
  int c, i;
  extern char line[];

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0'){
    ++i;
  }
}
