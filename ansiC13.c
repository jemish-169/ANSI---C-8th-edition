/*
Modity the previous program to display the two right-most digits of the integral part of the number.
*/
#include<stdio.h>
int main()
{
    float a;
    int num;
    scanf("%f", &a);
    num = (int)a;
    printf("%d", num % 100);

    return 0;
}