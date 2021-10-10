#include<stdio.h>
#pragma warning(disable: 4996)

void swap(int x, int y);

int main()
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a : %d,b : %d\n", a, b);

	return 0;
}
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}