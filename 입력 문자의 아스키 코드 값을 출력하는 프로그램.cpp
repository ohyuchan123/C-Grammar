#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int res;
	char ch;
	
	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1)break;
		printf("%d ", ch);
	}

	return 0;
}