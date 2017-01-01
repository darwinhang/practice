#include <stdio.h>
#define MAXLINE 1000  /* maximum input line size */

// had to change the name of the func from getline to getlinelen
// so it doesn't clash with a func from the standard library
int getlinelen(char line[], int maxline);
void copy(char to[], char from[]);
// the '\0' is the null char, whose value is zero 

/* print longest input line */
int main()
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];  /* current input line */
    char longest[MAXLINE];   /* longest line saved here */

    max = 0;
    while ((len = getlinelen(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {   /* there was a line */
        printf("%s", longest); 
    }
    return 0;
}

/* getlinelen: read a line into s, return length */
int getlinelen(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }
}
