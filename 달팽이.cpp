#include <stdio.h>
#pragma warning(disable:4996);
int main()
{
    int dal[5][5];
    int i;
    int x = 0;
    int y = -1;
    int d = 1;
    int p;
    int cnt = 1;
    int jmax;
    int max = 5;

    jmax = max;
    while (0 <= jmax)
    {
        for (i = 0; i < jmax; i++)
        {
            y = y + d;
            dal[x][y] = cnt;
            cnt++;
        }
        jmax--;
        for (i = 0; i < jmax; i++)
        {
            x = x + d;
            dal[x][y] = cnt;
            cnt++;
        }
        d = d * -1;
    }
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            printf("%4d", dal[x][y]);
        }
        printf("\n");
    }

    return 0;
}
