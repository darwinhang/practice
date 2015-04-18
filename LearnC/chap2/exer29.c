/*
 In a two’s complement number system, x &= (x−1) deletes the rightmost 1-bit in x. Explain why. Use this observation to write a faster version of bitcount.
*/
#include <stdio.h>
int bitcount(unsigned int);

int main(){
	int a = 23;
	int b = 40;
	printf("%i\n", bitcount(a));
	printf("%i\n", bitcount(b));
	return 0;
}

int bitcount(unsigned x){
	int b = 0;

	while (x > 0) {
		x &= (x - 1);
		b++;
	}
	return b;
}
