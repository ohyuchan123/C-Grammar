#include<stdio.h>
#pragma warning(disable: 4996)
//char�� ���� ���
//int main()
//{
//	char ch1 = 'A';
//	char ch2 = 65;
//	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch2);
//	printf("�ƽ�Ű �ڵ� ���� %d�� �ڵ� : %c\n", ch2, ch2);
//	return 0;
//}
/*���� ���� ������ ����*/
int main()
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 214783647;
	long long lln = 123451234512345;

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);

	return 0;
}