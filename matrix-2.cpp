#include <stdio.h>
int main()
{
    int a[100][100] = {{1, 0, 3, -1}, {2, 1, 0, 2}};
    int b[100][100] = {{4, 1, 0}, {-1, 1, 3}, {2, 0, 1}, {1, 3, 4}};
    int c[100][100] = {{0}};
    int n = 2; /* 第一矩阵的行数 */
    int m = 4; /* 第一矩阵的列数,即第二矩阵的行数 */
    int p = 3; /* 乘积矩阵的列数 */
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
