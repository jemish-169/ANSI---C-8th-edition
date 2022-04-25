/*
Write a program to read two floating point numbers using a scanf statement, assign their sum to
an integer variable and then output the values of all the three variables.
*/
#include <stdio.h>
int main()
{
    int sum;
    float a, b;
    printf("enter float value : \n");
    scanf("%f%f", &a, &b);
    sum = a + b;
    printf("sum of 2 number is %d\n value of a is %f\n value of b is %f\n", sum, a, b);

    return 0;
}