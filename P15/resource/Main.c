#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

int maxi(int x, int y, int z);

int main(void) {
	int num1;
	int num2;
	int num3;
	printf("enter interger");
	scanf("%d %d %d", &num1,&num2,&num3);
	printf("Max is %d \n",maxi(num1,num2,num3));
	system("pause");
	return 0;
}

int maxi(int x, int y, int z) {

	int max = x;
	if (y > max) {
		max = y;
	}
	if  (z > max) {
		max = z;
	}
	return max;
}