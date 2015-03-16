#include <stdio.h>
#include <limits.h>

int main(){
    // determine size of standard types on this machine
    int a;
    float b;
    char c;
    double d;

    printf("size of int in bytes: %d\n", sizeof(a));
    printf("size of float in bytes: %d\n", sizeof(b));
    printf("size of char in bytes: %d\n", sizeof(c));
    printf("size of double in bytes: %d\n", sizeof(d));

}
