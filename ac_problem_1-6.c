/*
write a program to print a multiplication table of 5
*/
#include<stdio.h>
int main()
{
    for (int i = 1;i <= 10;i++)
    {
        printf("5 * %d = %d\n", i, 5 * i);
    }

    return 0;
}