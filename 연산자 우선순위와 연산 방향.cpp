#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res=%d\n", res);
	res = ++a * 3;
	printf("res=%d\n", res);
	res = a > b && a != 5;
	printf("res=%d\n", res);
	res = a % 3 == 0;
	printf("res=%d\n", res);

	return 0;
}