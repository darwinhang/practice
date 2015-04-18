/*
Write the function any(s1,s2), which returns the first location in the string s1 where any character from the string s2 occurs, or −1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.)
*/
#include <stdio.h>
int any(char s1[], char s2[]);
int cinString(int c1, char s2[]);

int main() {
	char s1[] = "and you are?";
	char s2[] = "you";

	printf("%i\n", any(s1, s2));
	return 0;
}

int any(char s1[], char s2[]) {
	int i;
	for (i = 0; s1[i] != '\0'; i++){
		if (cinString(s1[i], s2)) {
			return i;
		}	
	} 

	return -1;
}

int cinString(int c1, char s2[]) {
	int i;

	for (i = 0; s2[i] != '\0'; i++) {
		if (c1 == s2[i]) {
			// found, so true
			return 1;
		}
	}
	// if not found then false
	return 0;
}
