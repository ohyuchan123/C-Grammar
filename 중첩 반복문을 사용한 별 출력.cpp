#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}