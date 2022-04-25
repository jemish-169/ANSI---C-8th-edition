/*
Write a program to illustrate the use of typedef declaration in a program.
*/
#include <stdio.h>
int main()
{
    typedef int unit;
    unit i, j;
    i = 10;
    j = 30;
    printf("value of i is: %d", i);
    printf("value of j is: %d", j);

    return 0;
}