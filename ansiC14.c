/*
Write a program that wil oblain the length and width of a rectangie from the user and compute its
area and perimeter.
*/
#include <stdio.h>
int main()
{
    float length, width, area, perimeter;
    scanf("%f%f", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("area is %f\nperimeter is %f", area, perimeter);

    return 0;
}