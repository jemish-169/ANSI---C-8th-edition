/*
Write a program to print a table of sin and cos functions for the interval from 0 to 180 degrees in
increments of 15 a shown here.
*/
#include <stdio.h>
#include <math.h>
int main()
{

    for (int i = 0; i <= 180; i += 15)
    {
        printf("%d\t%lf\t%lf\n", i, sin(i), cos(i));
    }
    return 0;
}