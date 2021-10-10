#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int ch;
	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}