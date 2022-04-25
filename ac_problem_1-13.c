/*
The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is
the diameter of the circle. Write a program to compute the area of the circle.
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
void main()
{
    int x1 = 2, x2 = 5, y1 = 2, y2 = 6, r;
    float D, P, A;
    D = sqrt((x2 - x1) ^ 2 + (y2 - y1) ^ 2);
    r = D / 2;
    A = PI * r * r;
    printf("The area of circle : %f\n", A);
}