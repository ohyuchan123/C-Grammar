#include<stdio.h>
#pragma warning(disable: 4996)
/*(a>b)?a:b ���� ������*/
int main()
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("ū �� : %d\n", res);

	return 0;
}