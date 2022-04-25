/*
Design and code an interactive modular program that will use functions to a matrix of m byn
S1ze, compute column averages and row averages, and then print the entire matrix with averages
shown in respective rows and columns.
*/
#include<stdio.h>
void matrix(int b[3][3])
{
    int i, j, k, sum[3], sum1[3];
    for (i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (j = 0; j < 3; j++)
        {
            sum[i] += b[i][j];
            sum1[j] += b[j][i];
        }

    }
    for (int i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (j == 3)
                printf("= %d", sum[i]);
            else if (i == 3)
                printf("%d ", sum[j]);
            else
                printf("%d ", b[i][j]);
        }
        printf("\n");
    }

};
int main()
{
    int a[3][3], j;
    printf("\n-------- Enter value of 3*3matrix -------\n");
    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    matrix(a);


    return 0;
}