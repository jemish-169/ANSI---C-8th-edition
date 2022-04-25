/*
Write a program to print a square of size 5 by using the character S as shown below.
*/
#include<stdio.h>
int main()
{
    int j;
    for (int i = 1;i <= 5;i++)
    {
        for (j = 1;j <= 5;j++)
        {
            if (i == 1 || j == 1 || j == 5 || i == 5)
                printf("S ");
            else
                printf("  ");

            //printf("S");
        }
        printf("\n");
    }

    return 0;
}