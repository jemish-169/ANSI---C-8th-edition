/*
Given an integer number, write a program that displays the number as follows:
First line all digits
Second line all except first digit
Third line all except first two digits
Last ine ne last Og
Or exampie, the number  wil be displayed as:
5678
678
8
*/
#include <stdio.h>
int main()
{
    int j;
    for (int i = 1; i <= 4; i++)
    {
        for (j = i + 4; j < 9; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}