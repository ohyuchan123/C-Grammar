#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	printf("�̸� �Է� : ");
	gets_s(name);
	printf("���� : %d,�̸� : %s\n", age, name);

	return 0;
}