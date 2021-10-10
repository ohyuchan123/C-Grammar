#include<stdio.h>
#pragma warning(disable: 4996)

void swap();

int main()
{
	int a = 10, b = 20;

	swap();
	printf("a : %d, b : %d\n", a, b);

	return 0;
}
void swap()
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}