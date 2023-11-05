#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>
#include<math.h>



int main() {
	for (int x = 1; x <= 10; x++) {
		printf("%.2f ", sqrt(x));
	}
	printf("\n");
}