#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a; //int�� ���� a����
	int b, c; //2���� int�� ���� b,c�� ���ÿ� ����
	double da; //double�� ���� da����
	char ch; //char�� ���� ch����

	a = 10; 
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';
	
	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %d\n", da);
	printf("���� ch�� �� : %d\n", ch);
}