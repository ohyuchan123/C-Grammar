#include<stdio.h>
#pragma warning(disable : 4996)

void print_char(char ch, int count);

int main()
{
	print_char('@', 5);

	return 0;
}
void print_char(char ch, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}