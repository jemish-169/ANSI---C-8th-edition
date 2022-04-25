/*
Write a program for fiting a straight line through a set of points (. Y,). i = 1..
The straight line equation is
y mx C
and the values of m and c are given y
n2 (4Y.)- (2
)
n)-(2
C(Ey,-mEx)
All summations are from 1 to n.
*/
#include<stdio.h>
int main()
{
    int M, C;
    int m, c, x[3], y[3], sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    printf("enter value of M:");
    scanf("%d", &m);

    printf("enter value of C:");
    scanf("%d", &c);
    printf("enter value of X:");
    scanf("%d", &x);
    for (int i = 0; i < 3; i++)
    {
        printf("enter %d value of x:", i + 1);
        scanf("%d", &x[i]);

        y[i] = x[i] * m + c;
    }
    for (int i = 0; i < 3; i++)
    {
        sum1 = sum1 + x[i] * y[i];
        sum2 = sum2 + x[i];
        sum3 = sum3 + y[i];
        sum4 = sum4 + x[i] * x[i];
    }
    M = ((3 * sum1) - (sum2 * sum3)) / ((3 * sum4 * sum4) - (sum4 * sum4));
    C = (1 / 3) * (sum3 - m * sum2);
    printf("M is %d\nC is %d", M, C);

    return 0;
}