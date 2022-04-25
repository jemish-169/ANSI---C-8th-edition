/*
Write a program that flls a five-by-five matrix as follows:
Upper left triangle with *1s
Lower right triangle with -1s
Right to left diagonal with zeros
*/
#include<stdio.h>
int main()
{
    int a[5][5], j;
    for (int i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
                printf(" 0 ");
            else if (i < j)
                printf(" 1 ");
            else
                printf("-1 ");
        }
        printf("\n");

    }


    return 0;
}