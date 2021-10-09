#include<stdio.h>
#pragma warning(disable: 4996)
/*한번에 여러 개의 수식을 차례로 나열해야 할 때 사용된다*/
int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}