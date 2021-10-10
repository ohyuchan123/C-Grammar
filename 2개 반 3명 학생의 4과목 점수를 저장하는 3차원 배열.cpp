#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int score[2][3][4] = {
		{{72,80,95,60},{68,98,83,90},{75,72,84,90}},
		{{66,85,90,88},{95,92,88,95},{43,72,56,75}}
	};
	for (int i = 0; i < 2; i++) {
		printf("%d ¹Ý Á¡¼ö...\n", i + 1);
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}