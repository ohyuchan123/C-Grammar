#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int ary[5];

	printf(" ary�� �� : %u\t", ary);
	printf("ary�� �ּ� : %u\n", &ary);
	printf("	ary + 1 : %u\t", ary + 1);
	printf("	&ary + 1 : %u\t", &ary + 1);

	return 0;
}