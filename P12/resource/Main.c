#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

int square(int y);

int main(){
	int x;
	for (int x = 1; x < 10; x++) {
		printf("%d ",square(x));
	}
	printf(" ");
	system("pause");
	return 0;
}

int square(int y) {
	return y * y;
}
