/*
Distance between two points (x1,y1) and (x2,y2) is governed by the formula
D2 = (x2-x1)2+(y2-y1)2
Write a program to compute D given the coordinates of the points.
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int x1, x2, y1, y2;
    float D, j;
    printf("Enter x1 = ");
    scanf("%d", &x1);
    printf("Enter x2 = ");
    scanf("%d", &x2);
    printf("Enter y1 = ");
    scanf("%d", &y1);
    printf("Enter y2 = ");
    scanf("%d", &y2);
    j = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    D = sqrt(j);
    printf("\n\n***Result***\nThe value of D : %f\n\n", D);
}
