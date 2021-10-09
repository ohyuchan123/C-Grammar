#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
/*무자열 저장*/
/*프로그램을 작성하다 보면 숫자뿐만 아니라 "apple"같은 문자열도 변수에 담아야 할 때가 있습니다
이때 문자열 char형을 배열 형태로 만들어 저장합니다
char 배열명[문자열길이+1]=문자열;*/
//int main()
//{
//	char fruit[20] = "strawberry";
//
//	printf("딸기 : %s\n", fruit);
//	printf("딸기쨈 : %s %s\n", fruit, "jam");
//
//	return 0;
//}
/*배열에 문장려 복사*/
/*char 배열에 초기와 이외에 문자열을 저장할 때는 strcpy 함수를 사용합니다*/
int main()
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}