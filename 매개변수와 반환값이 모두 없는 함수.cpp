#include<stdio.h>
#pragma warning(disable : 4996)

void print_line(void);

int main(void)
{
	print_line();
	printf("�й�	�̸�	����	����\n");
	print_line();

	return 0;
}
void print_line(void)
{
	for (int i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}