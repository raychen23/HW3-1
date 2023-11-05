#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

long factorial(long number);

int main() {
	int i;
	for (i = 0; i <= 10; i++) {
		printf("%2d! = %ld\n", i, factorial(i));
	}
}

long factorial(long number) {
	if (number <= 1) {
		return 1;
	}
	else {
		return(number*factorial(number - 1));
	}
}
