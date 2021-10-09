#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a; //int형 변수 a선언
	int b, c; //2개의 int형 변수 b,c를 동시에 선언
	double da; //double형 변수 da선언
	char ch; //char형 변수 ch선언

	a = 10; 
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';
	
	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %d\n", da);
	printf("변수 ch의 값 : %d\n", ch);
}