#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100];
    int n, m, p; /* n×m, m×p */
    int i, j, k;
    printf("Input value of n, m, p\n");
    scanf("%d %d %d", &n, &m, &p);
    printf("\nA:\n");
    for (i = 0; i < n; i++)              /* 读取矩阵A的各元素 */
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    printf("\nB:\n");
    for (i = 0; i < m; i++)              /* 读取矩阵A的各元素 */
        for (j = 0; j < p; j++)
            scanf("%d", &b[i][j]);
    printf("\nAB:\n");
    for (i = 0; i < n; i++)              /* 求矩阵C的各元素 */
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
