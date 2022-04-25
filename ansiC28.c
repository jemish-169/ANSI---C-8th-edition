/*
Write a program to compute the values of square-roots and squares of the numbers 0 to 100 in
steps 10 and print the output in a tabular form as shown below
Number Square Square
0 0
100 10 10000
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("enter any number\n");
    scanf("%lf", &x);
    printf("number is %lf\n square root of number is %lf\n square of number is %lf", x, sqrt(x), x * x);

    return 0;
}