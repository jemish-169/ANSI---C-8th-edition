/*
Write a program to read the following numbers, round them off to the nearest integers and print
out the resuts in mleger torm 35.7 50.21-23.73 4645
*/
#include <stdio.h>
int main()
{
    float a;
    printf("enter number: \n");
    scanf("%f", &a);
    printf("%1.0f", a);

    return 0;
}