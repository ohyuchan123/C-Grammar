#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
/*���ڿ� ����*/
/*���α׷��� �ۼ��ϴ� ���� ���ڻӸ� �ƴ϶� "apple"���� ���ڿ��� ������ ��ƾ� �� ���� �ֽ��ϴ�
�̶� ���ڿ� char���� �迭 ���·� ����� �����մϴ�
char �迭��[���ڿ�����+1]=���ڿ�;*/
//int main()
//{
//	char fruit[20] = "strawberry";
//
//	printf("���� : %s\n", fruit);
//	printf("����´ : %s %s\n", fruit, "jam");
//
//	return 0;
//}
/*�迭�� ����� ����*/
/*char �迭�� �ʱ�� �̿ܿ� ���ڿ��� ������ ���� strcpy �Լ��� ����մϴ�*/
int main()
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}