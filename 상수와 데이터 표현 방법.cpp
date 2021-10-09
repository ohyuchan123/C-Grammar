#include<stdio.h>
#pragma warning(disable : 4996)
/*세 가지 진법의 정수 상수*/
//int main()
//{
//	printf("%d\n", 12); //10진수 상수 출력
//	printf("%d\n", 014); //8진수 정수 상수 출력
//	printf("%d\n", 0xc); //16진수 정수 상수 출력
//	return 0;
//}
/*지수 형태의 실수 상수*/
//int main()
//{
//	printf("%.1lf\n", 1e6); //지수 형태의 실수를 소수점 형태로 출력
//	printf("%.7lf\n", 3.14e-5); // 소수점 이하 7자리까지 출력
//	printf("%le\n", 0.0000314); // 소수점 형태의 실수를 지수 형태로 출력
//	printf("%.2le\n", 0.0000314); //지수 형태로 소수점 이하 둘째 자리까지 출력
//	return 0;
//}
/*문자와 문자열 상수 표현법*/
int main() {
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다\n", '1', "first");
	return 0;
}