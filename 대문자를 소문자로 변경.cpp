#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char small, cap = 'G';
	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);
	return 0;
}