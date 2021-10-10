#include<stdio.h>
#pragma warning(disable : 4996)

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3)return;
	fruit(count + 1);
	printf("jam\n");
}