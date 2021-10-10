#include<stdio.h>
#pragma warning(disable: 4996)

int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char형 변수의 주소 크기 : %d\n", sizeof(pc));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(pi));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(pd));

	printf("char형 변수의 주소 크기 : %d\n", sizeof(*pc));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(*pi));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(*pd));

	return 0;
}
