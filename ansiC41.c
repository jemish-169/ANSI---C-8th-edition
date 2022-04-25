/*
Write a program to determine whether a given number is 'odd' or 'even' and print the message
NUMBER IS EVEN
NUMBER ISs ODD
(a) without using else option, and (b) with else option.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    /*if (n % 2 == 1)
    {
        printf("it is ODD,\n");
    }
    if (n % 2 == 0)
    {
        printf("it is EVEN");
    }*/
    if (n % 2 == 0)
    {
        printf("it is EVEN");
        /* code */
    }
    else
        printf("it is ODD");

    return 0;
}