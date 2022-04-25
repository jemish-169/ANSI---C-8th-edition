/*
write a program to find area of given radius circle.
*/
#include<stdio.h>
#define pi 3.14
int main()
{
    int radius;
    printf("Enter radius : ");
    scanf("%d", &radius);
    printf("area is %f", pi * radius * radius);
    return 0;
}