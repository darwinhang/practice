#include <stdio.h>

#define MAXLINELENGTH 80
#define MAXWORDLENGTH 100
#define MAXLINESPLIT 3 
#define ELLIPSIS "..."

/* Program to fold long input lines into two or more
 * shorter lines after the last non-blank character
 * that occurs before the n-th column of input. Make sure
 * your program does something intelligent with very long 
 * lines, and if there are no blanks or tabs before the
 * specified column.
 */
int main()
{ 
  int current_line_splits = 0;
  char line[MAXLINELENGTH + 1];
  
}

int getnextline(char line[])
{
  int c, curr_line_length;
  char blank_chars = {' ', '\t', '\n'}
  char[] word;

  // so I want keep track of size of the "nextline" array
  // going word by word. Only add the word if it 
  // can fit into the array.
  // if the first word in the line is too long, 
  // then cut it off at 77 chars and add ellipsis
  // if the line can be split up into more than one line,
  // stop at 4 lines, add ellipsis to end of 4th line. 
}

/* get each word one at a time.
 * return the size of the word.
 */
int getnextword(char word[])
{
  int c, i;
  char[] word; 
  for(i=0;(c=getchar()) != EOF; i++){
    if (i>MAXWORDLENGTH){
      addellipsis(line);
    } else{
      word[i]+=c;
    }
  }
  return i;
}

/* Add ellipses to end of line.
 * for cases when first word in line is too long
 * or there are too many lines.
 */
void addellipsis(char line[])
{
  int thirdtolastprintedchar = 76;

  for(int i=thirdtolastprintedchar;i<MAXLINELENGTH;i++){
    line[i] = '.';
  }
}
