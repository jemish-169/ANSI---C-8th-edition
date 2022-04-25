/*
Wrte
a
program to print all integers that are not divisible by ether 2 or 3 and le betwoen 1 and
100. Program should als0 account the number of such integers and print the result.
*/
#include<stdio.h>
int main()
{
    for (int i = 1;i <= 100;i++)
    {
        if (i % 2 != 0 && i % 3 != 0)
            printf("%d\t ", i);
    }

    return 0;
}