#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}