/*
Given are two one-dimensional arrays A and B which are sorted in ascending order. VWrite a
program lo merge them into a single sorted arrayC that contains every tem trom arrays A and
B, in ascending order.
*/
#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], j, c[2][2];
    printf("Enter metrix 1.\n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter metrix 2.\n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            if (a[i][j] < b[i][j] || a[i][j] == b[i][j])
            {
                c[i][j] = a[i][j];
            }
            else
            {
                c[i][j] = b[i][j];
            }

        }
    }
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;

}