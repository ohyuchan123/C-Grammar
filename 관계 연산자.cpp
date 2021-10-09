#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 10, b = 20, c = 30;
	int res;

	res = (a > b);
	printf("a>b : %d\n", res);
	res = (a < b);
	printf("a<b : %d\n", res);
	res = (a >= b);
	printf("a>b : %d\n", res);
	res = (a >= b);
	printf("a>b : %d\n", res);
	res = (a <= b);
	printf("a>b : %d\n", res);
	res = (a <= b);
	printf("a>b : %d\n", res);
	res = (a == b);
	printf("a>b : %d\n", res);
	res = (a != b);
	printf("a>b : %d\n", res);

	return 0;
}