#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}