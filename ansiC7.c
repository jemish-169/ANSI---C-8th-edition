/*
Write a program to do the following:
(a) Declare x and y as integer variables and z as a short integer variable.
(b) Assign two 6 digit numbers to x and y
(c) Assign the sum of x and y to z
(d) Output the values of x, y and z
Comment on the output.
*/
#include <stdio.h>
int main()
{
    int x, y;
    short int z;
    printf("enter 2 numbers:\n");
    scanf("%d%d", &x, &y);
    z = x + y;
    printf("value of x = %d\n", x);

    printf("value of z = %d\n", y);

    printf("value of y = %d\n", z);
    return 0;
}