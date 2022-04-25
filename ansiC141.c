/*
Write a function using pointers to add two matrices and to retun the resutant matrix to the calling
function.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int* add(int* m1, int* m2, int row, int col)
{
    int* m3 = (int*)malloc(sizeof(int) * row * col);
    int i, j, k, a1;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            a1 = *(m1 + i * col + j) + *(m2 + i * col + j);
            *(m3 + i * col + j) = a1;
        }
    }
    return m3;
}

int main()
{
    int j, * a = 0, * b = 0, * m3, row, col;
    row = col = 3;
    printf("Enter 1st matrix : \n");
    a = (int*)malloc(sizeof(int) * row * col);
    for (int i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            scanf("%d", a + i * col + j);
        }
    }
    printf("Enter 2nd matrix : \n");
    b = (int*)malloc(sizeof(int) * row * col);
    for (int i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            scanf("%d", b + i * col + j);
        }
    }
    m3 = (int*)malloc(sizeof(int) * row * col);
    m3 = add(a, b, row, col);
    printf("sum of 2 matrix is : \n");
    for (int i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            printf("%d ", *(m3 + i * col + j));
        }
        printf("\n");
    }
    return 0;
}