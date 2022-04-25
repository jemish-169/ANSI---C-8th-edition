/*
Write a program to read the values of x and y and print the results of the following expressions in
one ine.
b) (C) (x*y\x-
X-y
*/
#include <stdio.h>
int main()
{
    float a, b, c, x, y;
    printf("enter value of X and Y : \n");
    scanf("%f%f", &x, &y);
    a = (x + y) / (x - y);
    b = (x + y) / 2;
    c = (x + y) * (x - y);
    printf("%0.3f\t%0.3f\t%0.3f", a, b, c);

    return 0;
}