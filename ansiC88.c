/*
Write a program to read two matrices A and B and print the following:
(a) A+ B: and
(b) A-B.
*/
#include<stdio.h>
int main()
{
    int a[2][2], b[2][2], j;
    printf("enter 2*2 matrix 1 : \n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter 2*2 matrix 2 : \n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("sum of matrix 1 AND matrix 2 is : \n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            printf(" %d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    printf("substraction of matrix 1 AND matrix 2 is : \n");
    for (int i = 0;i < 2;i++)
    {
        for (j = 0;j < 2;j++)
        {
            printf(" %d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }


    return 0;
}