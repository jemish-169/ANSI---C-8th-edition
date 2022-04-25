/*
We know that the roots of a quadratic equation of the form
ax'bxC=0
are given by the following equatins:
-b+square-rool(b-4ac)
,
2a
D-square-rootD480)
28
Write a function to calculate the roots. The function must use two pointer parameters, one to
receive the coefficients a, b, and c, and the other to send the roots to the calling function.
*/
#include<stdio.h>
#include<math.h>
void calculate(double* a, double* b, double* c)
{
    double x1, x2, sum;
    sum = (*b * *b) - 4 * *a * *c;
    // printf("%.3f ", sum);
    x1 = (-(*b) + sqrt(sum)) / 2 * *a;
    x2 = (-(*b) - sqrt(sum)) / 2 * *a;
    printf("X1 is = %.3lf \n", x1);
    printf("X2 is = %.3lf ", x2);
}
int main()
{
    double x, y, z;
    printf("Enter value of a,b,c : ");
    scanf("%lf%lf%lf", &x, &y, &z);
    calculate(&x, &y, &z);
    return 0;
}