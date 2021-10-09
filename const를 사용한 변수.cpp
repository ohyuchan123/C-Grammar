#include<stdio.h>
#pragma warning(disable : 4996)
/*const를 붙이면 초기화도니 값을 바꿀 수 없습니다*/
int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다\n", tax);

	return 0;
}