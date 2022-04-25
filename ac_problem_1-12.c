/*
A point on the circumference of a circle whose center is (0, 0) is (4, 5). Write
a program to compute perimeter and area of the circle.
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
void main()
{
    int x1 = 0, x2 = 4, y1 = 0, y2 = 5;
    float r, P, A;
    r = sqrt((x2 - x1) ^ 2 + (y2 - y1) ^ 2);
    P = 2 * PI * r;
    A = PI * r * r;
    printf("***Result***\n\nThe perimeter of circle : %f\n", P);
    printf("The area of circle      : %f\n", A);
}