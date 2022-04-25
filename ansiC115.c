/*
Write a function that can be called to compute the product of two matrices of size m by n andn
by
m. The main function provides the values for m and n and fwo matrices.
*/
#include<stdio.h>
#include<math.h>
void mul(int a, int b, int c[a][b], int d[b][a])
{
    int x, y, j, p, sum[a][a];

    for (x = 0; x < a; x++)
    {
        for (y = 0; y < a; y++)
        {
            sum[x][y] = 0;
            for (p = 0;p < a;p++)
            {
                sum[x][y] += c[y][p] * d[p][y];
                //printf("%d", sum[x][y]);
            }
        }

    }

    printf("\n-------- answer matrix -------\n");

    for (int i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");

    }

};
int main()
{
    int m, n;
    printf("Enter value of m :");
    scanf("%d", &m);
    printf("Enter value of n :");
    scanf("%d", &n);
    int a[m][n], j, b[n][m];
    printf("\n-------- Enter value of 1st m*n matrix -------\n");
    for (int i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");

    }
    printf("\n-------- Enter value of 2nd n*m matrix -------\n");
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");

    }
    mul(m, n, a, b);

    return 0;
}