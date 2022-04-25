/*
Write a program that reads a floating-point number and then displays the righl-most digit of the integral part 
of the number.
*/
#include <stdio.h>
int main()
{
    float a;
    int num;
    scanf("%f", &a);
    num = (int)a;
    printf("%d", num % 10);

    return 0;
}