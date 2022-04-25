/*
Write a program to read a double-type value x that represents angle in radians and a character
ype variable T that represents the type of trigonometric function and display the value of
(a) sin(x), fsor S is ass/gned lo
(6) cos (x). ifc or C is assigned to T, and
(c) tan (x). ift or Tis assigned to TT
using (0) H...else statement and (i) switch statement.
*/
#include <stdio.h>
#include <math.h>
int main()
{

    double value, x;
    char c;

    printf("enter value of t : ");
    scanf("%c", &c);
    printf("enter value : ");
    scanf("%lf", &x);
    // printf("\n%lf", x);
    /*  if (c == 'S')
    {
        printf("%lf", sin(x));
    }
    else if (c == 'C')
    {
        printf("%lf", cos(x));
    }
    else if (c == 'T')
    {
        printf("%lf", tan(x));
    }
    else
    {
        printf("enter proper value");
    }
*/
    switch (c)
    {
    case 'S':
    {
        value = sin(x);
        break;
    }

    case 'C':
    {
        value = cos(x);
        break;
    }

    case 'T':
    {
        value = tan(x);
        printf("hy");
        break;
    }

    default:
        break;
    }
    printf("%.3lf", value);
    return 0;
}