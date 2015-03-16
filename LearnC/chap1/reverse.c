#include <stdio.h> 
#define MAXLINE 1000

void reverseString(char s[], char reversedS[]);
int getcurrline(char s[], int lim);
void reverseline(char s[], char rs[]);

int main(){
    int len;
    char line[MAXLINE];
    char reversedline[MAXLINE];
    char holder[4];
    char whatup[] = "okay";

    reverseString(whatup, holder);
    printf("%s\n", holder);

    while((len < getcurrline(line, MAXLINE)) > 0) {
        reverseline(line, reversedline);
        printf("%s", reversedline);
    }
    printf("\n");

    return 0;
}

// define a function to reverse a string
void reverseString(char s[], char reversedS[]) {
    int i, j;
    for (i=0, j=3; i<4 ; i++, j--) {
        reversedS[i] = s[j];
    }
}

// now I need to reverse a string from input
int getcurrline(char s[], int lim) {
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

void reverseline(char s[], char rs[]){
    int i, j, c, pos;
    i = pos = 0;
    // get the index of '\0' in the string
    while((c=s[i++])!='\0'){
        //printf("%c\n", c);
        pos++;
        //printf("%d", pos);
    }
    // starting at the above index, loop through 's' in
    // reverse order, adding to rs
    for (i=0, j=pos-1; i<pos; i++, j--){
        //printf("%c", s[j]);
        rs[i] = s[j]; 
    }
    // append '\0' to the end of rs
    rs[i] = '\0';
}
