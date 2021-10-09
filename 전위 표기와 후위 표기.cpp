#include<stdio.h>
#pragma warning(disable: 4996)
int main()
{
	int a = 5, b = 5;
	int pre, post;
	
	pre = (++a) * 3; //전위
	post = (b++) * 3; //후위

	printf("초기값 a=%d,b=%d\n", a, b);
	printf("전위형:(++a)*3=%d,후위형:(b++)*3=%d\n", pre, post);

	return 0;
}