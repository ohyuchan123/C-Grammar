#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)

int main()
{
	char str[20] = "mango tree";
	
	strncpy(str, "appple-pie", 5);

	printf("%s\n", str);

	return 0;
}