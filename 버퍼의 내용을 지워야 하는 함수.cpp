#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	int num, grade;
	
	printf("�й� �Է� : ");
	scanf("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}