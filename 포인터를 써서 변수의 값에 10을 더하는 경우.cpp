#include<stdio.h>
#pragma warning(disable : 4996)

void add_ten(int* pa);
int main()
{
	int a = 10;

	add_ten(&a);
	printf("a : %d\n", a);

	return 0;
}
void add_ten(int* pa)
{
	*pa = *pa + 10;
}