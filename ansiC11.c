/*
Given the values of the variables x. y and z. write a program to rotate their values such that x has
the value of y. y has the value of z, and z has the value of x.
*/
#include <stdio.h>
int main()
{
    int temp, x, y, z;
    printf("enter values of x,y,z : \n");
    scanf("%d%d%d", &x, &y, &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);
    printf("value of z is %d\n", z);
    return 0;
}