/*
Write a program lo read a matrix of size m xn and print its transpose.
*/
#include<stdio.h>
int main()
{
    int i, j, a[3][3];
    printf("Enter 3*3 matrix : \n");
    for (int i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix is :\n");
    for (int i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf(" %d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}