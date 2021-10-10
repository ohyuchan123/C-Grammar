#include<stdio.h>
#pragma warning(disable:4996)
/* i/j :0  1  2  3  4
   0    1  2  3  4  5 
   1   10  9  8  7  6
   2   11 12 13 14 15
   3   20 19 18 17 16
   4   21 22 23 24 25
   */
int main()
{
	int arr[5][5];
	int x = 1;
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= 5; j++) {
                arr[i][j] = x;
                x++;
            }
        }
        else {
            for (int j = 5; j >= 1; j--) {
                arr[i][j] = x;
                x++;
            }
        }
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
