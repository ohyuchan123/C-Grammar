#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 10, b = 10;

	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);
}