#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>

double  Power(double x, int n);

void main(void) {
	int k;
	double ans;
	printf("�p��3.5��k����,��Jk");
	scanf("%d", &k);
	ans = Power(3.5, k);
	printf("3.5��%d���謰 %f",k,ans);
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
