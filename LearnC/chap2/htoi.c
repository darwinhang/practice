#include <stdio.h>

int htoi(char s[]);
int convert(int s);
int lower(int c);

int main() {
    char whatup[] = "0x10ab";
    // char whatup[] = "10ab";
    printf("%i\n", htoi(whatup));

    return 0;
}

/* htoi: convert hex String to integer */
int htoi(char s[]) {
    int i = 0, n = 0;
    int val;
    char x[] = "x";

    char some = s[1];

    if (some ==  x[0]) {
	i = 2;
    }

    for (; (val = convert(s[i])) > -1; ++i) {
        if (val > 9) {
	    n = n * 100 + val;
        }
        else {
            n = n * 10 + val;
        } 
    }
    return n;
}

/* convert: convert one char to int, return char or null */
int convert(int s) {

    int c;
    // check if char is a digig
    if (s >= '0' && s <= '9'){
        return s - '0'; 
    }  
    
    c = lower(s);    
 
    if (c >= 'a' && c <= 'f') {
	return c - 'a' + 10;	
    }
    printf("%s\n", "This is the end"); 
    return -1;

}

/* lower: convert all valid chars to lowercase, straight from the book */
int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    }
    else {
        return c;
    }
}
