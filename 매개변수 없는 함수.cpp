#include<stdio.h>
#pragma warning(disable : 4996)

int get_num(void);

int main()
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}
int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}