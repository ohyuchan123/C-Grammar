#include<stdio.h>
#pragma warning(disable: 4996)
/*�ѹ��� ���� ���� ������ ���ʷ� �����ؾ� �� �� ���ȴ�*/
int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}