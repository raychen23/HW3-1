#pragma warning( disable : 4996 )
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	char string1[60] = "Welcome";
	char string2[60];
	int len;
	strcpy(string2, string1);
	printf("string2=%s\n", string2);
	len = strlen(string2);
	printf("�r�����%d\n", len);
}