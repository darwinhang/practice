#include <stdio.h>

#define IN 1
#define OUT 0


/* Exercise 1-13. Program to print a histogram of word length in an input */
int main()
{
    int c, charcount, maxcount, i, j;
    charcount = maxcount = 0;
    int state = OUT;
    // array to hold the counts for each word length (position in array)
    int charlength[10];
    int chardiff[10];
    // initialize array with values
    for (i = 0; i < 10; ++i) {
        charlength[i] = 0;
    }
    // will need to keep track of state (in word or not (by space char, etc.))
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++charlength[charcount];
            charcount = 0;
        }
        else {
            state = IN;
            ++charcount;
        }
    }
    for (i = 0; i < 10; ++i) {
        if (charlength[i] > maxcount) {
            maxcount = charlength[i];
        }
        printf(" %d", i);
    }
    printf("\n");

    // print the histogram
    // will use asterisks (*)
    /* 1. determine the highest occurance
       2. set that to be the maximun times through for loop
       3. set up a nested for loop that goes through each number in array
       4. subtract the highest value from each index
       5. loop through the array.
       6. if the value at a position is 0 or greater, then print a "*"
       7. else print a ' '
     */

    for (i = 0; i < 10; ++i) {
        chardiff[i] = charlength[i] - maxcount; 
    }
    for (i = 0; i < maxcount; ++i) {
        for (j = 0; j < 10; ++j) {
            if (chardiff[j] >= 0){
                printf(" *");
            }
            else {
                printf("  ");
            }
            ++chardiff[j];
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
