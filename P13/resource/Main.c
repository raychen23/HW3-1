#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

double  Power(double x, int n);

void main(void) {
	int k;
	double ans;
	printf("計算3.5的k次方,輸入k");
	scanf("%d", &k);
	ans = Power(3.5, k);
	printf("3.5的%d次方為 %f",k,ans);
	system("pause");
	return 0;
}

double  Power(double x, int n) {
	int i = 0;
	double power = 1;
	for (i = 1; i <= n; i++) {
		power = power * x;
	}
	return power;

}
