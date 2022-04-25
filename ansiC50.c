/*
Write a program to compute the real roots of a quadratic equation
axbx+C 0
The roots are given by the equations
Vb-4 aC
X,-b+
a
The program should request for the values of the constants a, b and c and print the values of x
and x, Use the following rules:
(a) No soluton, if both a and b are zero
(b) There is only one root, if a = 0 (x =-cb)
(C) There are no real roots, f b-4 ac is negalive
(d) otherwise, there are two real roots
Test your program with appropriate data so that allogical paths are working as per your design.
Incorporate appropriate output messages
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, root;
    float x1, x2;
    printf("enter values of a,b,c :");
    scanf("%f%f%f", &a, &b, &c);
    root = (b * b - 4 * a * c);
    x1 = (-b) + (sqrt(root) / 2 * a);
    x2 = (-b) - (sqrt(root) / 2 * a);
    if (a == 0 && b == 0)
        printf("both are zero");
    else if (a == 0)
    {
        printf("there is only one root.");
    }
    else if (root < 0)
        printf("there are no real roots.");
    else
        printf("there is 2 real root and it is\nx1 = %.3f\nx2 = %.3f", x1, x2);

    return 0;
}