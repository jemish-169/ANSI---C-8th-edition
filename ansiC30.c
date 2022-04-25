/*
Write a program to illkustrate the use of cast operator in a real ife situation.
*/
#include <stdio.h>
int main()
{
    int length;
    printf("enter length :\n");
    scanf("%d", &length);
    printf("AREA is %lf", (double)length * (double)length);
    return 0;
}