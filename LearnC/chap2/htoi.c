#include <stdio.h>

int htoi(char s[]);

int main() {
    char whatup[10];
    int i;
    for (i = 0; i < 10; ++i) {
        whatup[i] = 'a';
    }
    htoi(whatup);

    return 0;
}

/* htoi: convert hex String to integer, returning an array of ints */
int htoi(char s[]) {
    // TODO: Figure out length of array
    int i;

    // Then iterate over array
    for (i = 0; s[i] != EOF; ++i) {
        printf("%c", s[i]);
    }
    return i;
}

/* hextodec: decimal val for of hex val input */

