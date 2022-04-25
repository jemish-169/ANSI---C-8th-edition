/*
write a program to print the following pettern.

*
* *
* * *
* * * *
*/
#include<stdio.h>
int main()
{
    int j;
    /// printf("*\n* *\n* * *\n* * * *");
     //OR
    for (int i = 1;i <= 4;i++)
    {
        for (j = 0;j < i;j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}