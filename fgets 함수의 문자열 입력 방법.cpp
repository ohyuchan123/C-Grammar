#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력된 문자열은 %s 입니다\n", str);

	return 0;
}