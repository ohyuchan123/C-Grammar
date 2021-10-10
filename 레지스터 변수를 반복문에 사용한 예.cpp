#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	register int i;
	int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}