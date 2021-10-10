#include<stdio.h>
#pragma warning(disable : 4996)

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}
void input_ary(double* pa, int size)
{
	printf("%d개의 실수값 입력 : ", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}
double fint_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}
	return max;
}