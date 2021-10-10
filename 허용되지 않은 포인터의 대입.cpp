#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%.lf\n", *pd);

	return 0;
}