// Alternative version of squeeze that deletes each char in s1 that 
// matches any char in s2

#include <stdio.h>

void squeeze2(char s1[], char s2[]);
int cinString(int c1, char s2[]);

int main() {
	char s1[] = "the meaning of life";
	char s2[] = "ef";

	printf("%s\n", s1);

	squeeze2(s1, s2);

	printf("%s\n", s1);

  return 0;
}

void squeeze2(char s1[], char s2[]) {
	int i, j;
	
	for (i = j = 0; s1[i] != '\0'; i++) {
		if (!(cinString(s1[i], s2))) {
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';

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
