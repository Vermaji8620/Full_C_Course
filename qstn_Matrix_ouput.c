#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int i, j, k, l, m, n;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (k = 0; k < 3; k++)
    {
        for (l = 0; l < 3; l++)
        {
            printf("%d ", b[k][l]);
        }
        printf("\n");
    }
    printf("\n");
    int c[3][3];
    // int sum[3][3] = 0;
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            // printf("%d ", a[m][n] * b[n][m]);
            printf("%d*%d ", a[m][n] , b[n][m]);
        }
        printf("\n");
    }

    return 0;
}