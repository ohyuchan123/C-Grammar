#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a = 20;
	int b = 0;

	if (a > b)
	{
		b = a;
	}
	printf("a : %d ,b : %d\n", a, b);

	return 0;
}