#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 1;
	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}