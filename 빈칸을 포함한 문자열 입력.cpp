#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char str[80];
	printf("���ڿ� �Է� : ");
	gets_s(str);
	puts("�Էµ� ���ڿ� : ");
	puts(str);

	return 0;
}	