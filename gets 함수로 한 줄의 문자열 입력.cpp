#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets_s(str);
	printf("�Է��� ���ڿ��� %s �Դϴ�.", str);

	return 0;
}