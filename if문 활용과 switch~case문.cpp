#include<stdio.h>
#pragma warning(disable:4996)
/*ÁßÃ¸µÈ if¹®*/
int main()
{
	int a = 20, b = 10;
	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b -= 1;
		}
	}
	printf("a : %d,b : %d\n", a, b);

	return 0;
}