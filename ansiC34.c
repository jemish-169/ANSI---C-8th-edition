/*
Write a program that reads 4 floating point values in the range. 0.0 to 20.0, and prints a horizontal
bar chart to represent these values using the charecter as the fll character. For the purpose
of the chart. the values may be rounded off to the nearest integer. For example, the value 4.36
should be represented as tolows.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int j;
    float a, b;
    printf("enter float value : \n");
    scanf("%f", &a);
    a = round(a);

    for (j = 0; j < a; j++)
    {
        printf("*\t");
    }

    return 0;
}