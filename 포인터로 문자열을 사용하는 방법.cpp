#include<stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char *dessert = "apple";

	printf("오늘의 후식은 %s 입니다\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s이니다\n", dessert);
}