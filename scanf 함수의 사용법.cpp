#include<stdio.h>
#pragma warning(disable:4996)
/*scanf �Լ��� ����*/
/*scanf�Լ��� Ű���忡�� �Է��� ���� ������ ������ �� ����մϴ�*/
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("�Էµ� ��: %d\n", a);
//
//	return 0;
//}
/*scanf �Լ��� ����� ���� �Է�*/
//int main()
//{
//	int age;
//	double height;
//
//	printf("���̿� Ű�� �Է��ϼ��� : ");
//	scanf("%d%lf", &age, &height);
//	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);
//
//	return 0;
//}
/*���ڿ� ���ڿ� �Է�*/
int main()
{
	char grade;
	char name[20];

	printf("���� �Է� :");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�\n", name, grade);

	return 0;
}