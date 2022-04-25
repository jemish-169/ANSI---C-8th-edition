/*
Write a program to display the following simple arithmetic calculator
x=
y=
Sum=
Difference=
Product=
Division=
*/
#include<stdio.h>
void main()
{
    int x = 6, y = 5;
    float sum, Difference, Product, Division;
    sum = x + y;
    Difference = x - y;
    Product = x * y;
    Division = x / y;
    printf("\nx          =  %d      ", x);
    printf("y          =  %d\n", y);
    printf("sum        =  %f      ", sum);
    printf("Difference =  %f\n", Difference);
    printf("Product    =  %f     ", Product);
    printf("Division   =  %f\n\n", Division);
}