/*
Given a string
char str[ = *123456789
Write a program that dlsplays the following
1
232
34543
4567654
567898765
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n = 5, i, j, num = 1, gap;
    gap = n - 1;

    for (j = 1; j <= n; j++)
    {
        num = j;
        for (i = 1; i <= gap; i++)
            printf("  ");

        gap--;
        for (i = 1; i <= j; i++)
        {
            printf("%d ", num);
            num++;
        }
        num--;
        num--;
        for (i = 1; i < j; i++)
        {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}