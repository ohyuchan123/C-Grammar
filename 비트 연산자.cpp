#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 10;
	int b = 12;

	printf("a&b : %d\n", a & b);
	printf("a^b : %d\n", a ^ b);
	printf("a|b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a<<b : %d\n", a << b);
	printf("a>>b : %d\n", a >> b);

	return 0;
}