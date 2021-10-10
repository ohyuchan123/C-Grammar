#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets_s(str);
	printf("입력한 문자열은 %s 입니다.", str);

	return 0;
}