#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	printf("이름 입력 : ");
	gets_s(name);
	printf("나이 : %d,이름 : %s\n", age, name);

	return 0;
}