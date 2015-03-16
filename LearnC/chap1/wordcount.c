#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines, words, and chars in input */
int main(){
    int c, nl, nw, nc, state;

    // state originally set to 'outside a word'
    state = OUT;
    nl = nw = nc = 0;

    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else {
            state = IN;
            ++nw;
        }
    } 
    printf("%d %d %d\n", nl, nw, nc);
}
