#include<stdio.h>
#pragma warning(disable : 4996)
#
/*�Ǽ� �ڷ���*/
/*�Ǽ��� �����͸� �����ϴ� ����� ������ �ٸ��Ƿ� ������ �ڷ����� ����մϴ�
ũ�⿡ ���� float,double,long double�� �����մϴ�*/
int main()
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);

	return 0;
}