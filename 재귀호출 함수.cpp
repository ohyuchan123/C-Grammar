#include<stdio.h>
#pragma warning(disable : 4996)

void fruit(void);

int main()
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}