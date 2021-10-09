#include<stdio.h>
#pragma warning(disable : 4996)
#
/*실수 자료형*/
/*실수는 데이터를 구현하는 방법이 정수와 다르므로 별도의 자료형을 사용합니다
크기에 따라 float,double,long double로 구별합니다*/
int main()
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	return 0;
}