#include<stdio.h>
#pragma warning(disable : 4996)
int main()
{
	char str[80] = "applejam";

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� :");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}