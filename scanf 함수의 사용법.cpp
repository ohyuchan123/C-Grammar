#include<stdio.h>
#pragma warning(disable:4996)
/*scanf 함수의 사용법*/
/*scanf함수는 키보드에서 입력한 값을 변수에 저장할 떄 사용합니다*/
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("입력된 값: %d\n", a);
//
//	return 0;
//}
/*scanf 함수를 사용한 연속 입력*/
//int main()
//{
//	int age;
//	double height;
//
//	printf("나이와 키를 입력하세요 : ");
//	scanf("%d%lf", &age, &height);
//	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);
//
//	return 0;
//}
/*문자와 문자열 입력*/
int main()
{
	char grade;
	char name[20];

	printf("학점 입력 :");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다\n", name, grade);

	return 0;
}