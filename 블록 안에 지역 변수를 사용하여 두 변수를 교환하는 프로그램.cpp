#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d\n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}
	printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);

	return 0;
}