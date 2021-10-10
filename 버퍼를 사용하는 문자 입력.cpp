#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}