#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char* pary[5];
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "Lion";
	for (int i = 0 : i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}
	return 0;
}