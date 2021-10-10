#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char str[80];
	printf("문자열 입력 : ");
	gets_s(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}	