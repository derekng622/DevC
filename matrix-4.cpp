#include <stdio.h>
int main()
{
	int A[3][3]={{1,2,-1}, {1,0,-1},{3,4,0}};
	int B[3][3]={{2,1,3}, {1,2,3},{-1,0,4}};
	int C[3][3]={{0}};
	int n = 3; /* ��һ��������� */
	int p = 3; /* ��һ���������,���ڶ���������� */
	int m = 3; /* �˻���������� */
	int i, j, k;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			C[i][j] = 0; 
			for(int k = 0; k < p; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
			printf("%5d", C[i][j]);
		}
		printf("\n");
	}

}
