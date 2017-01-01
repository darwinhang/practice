#include <stdio.h> 
#define MAXLINE 1000

void reverseline(char s[]);
int getnextline(char s[], int lim);


int main()
{
  char line[MAXLINE];
  // char whatup[] = "okay";
  // reverseline(whatup);
  // printf("%s\n", whatup);

  while(getnextline(line, MAXLINE) > 0) {
    reverseline(line);
    printf("%s", line);
  }
  printf("\n");

  return 0;
}

// copy the nextline into an array, s
int getnextline(char s[], int lim) 
{
  int c, i;

  for (i=0; (c=getchar()) != EOF && c!='\n'; ++i) {
   s[i] = c; 
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// reverse the character array, s 
void reverseline(char s[])
{
  int i, j,k, c, pos;
  i = pos = 0;
  // get the index of '\0' in the string
  while((c=s[i++])!='\0'){
      pos++;
  }
  for (i=0, j=pos-1; i<j; i++, j--){
	  k = s[i];
	  s[i] = s[j];
	  s[j] = k;
  }
}
