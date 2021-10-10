#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 1;
	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);
	return 0;
}