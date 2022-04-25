/*
Write a function that can be called to find the largest element of an m by n matrix
*/
#include<stdio.h>
void max(int b, int c, int x[b][c])
{
    int i, j, sum = 0;
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < c; j++)
        {
            /* code */
            if (x[i][j] > sum)
            {
                sum = x[i][j];
            }
        }

        /* code */
    }
    printf("maximum is %d", sum);

}
int main()
{
    int m, n;
    printf("how many rows you want : ");
    scanf("%d", &m);
    printf("how many column you want : ");
    scanf("%d", &n);
    int a[m][n], j;
    printf("Enter m*n matrix : \n");
    for (int i = 0;i < m;i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            /* code */
        }

    }
    max(m, n, a);
    return 0;
}