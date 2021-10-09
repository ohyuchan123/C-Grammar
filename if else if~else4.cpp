#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a = 0, b = 0;
	if (a > b)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);

	return 0;
}