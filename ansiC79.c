/*
Two matrices that have the same number of rows and columns can be multiplied to produce a
third matrix. Consider the following two matrices.
*/
#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], j, k, c[3][3] = { 0 };
    printf("Enter metrix 1.\n");
    for (int i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter metrix 2.\n");
    for (int i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0;k < 3;k++)
            {
                c[i][j] += a[j][k] * b[k][j];
            }

        }

    }
    printf("The metrix metrix 3 is.\n");
    for (int i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}