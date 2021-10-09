#include<stdio.h>
#pragma warning(disable: 4996)
//char형 변수 사용
//int main()
//{
//	char ch1 = 'A';
//	char ch2 = 65;
//	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch2);
//	printf("아스키 코드 값이 %d인 코드 : %c\n", ch2, ch2);
//	return 0;
//}
/*여러 가지 정수형 변수*/
int main()
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 214783647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);

	return 0;
}