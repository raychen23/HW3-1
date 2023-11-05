#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	int i;
	for (i = 0; i <= 20; i++) {
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) {
			printf("\n");
		}
	}
}