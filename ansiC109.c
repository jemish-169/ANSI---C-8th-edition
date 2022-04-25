/*
Wnte a function that will round a floating-point number to an indicaled decimal place. For example
ne number 45 woud yield ihe value 17.46 when tis rounded of to two decimal places.
*/
#include<stdio.h>
void convert(float x);
int main()
{
    float num;
    printf("Enter a float value : ");
    scanf("%f", &num);
    convert(num);

    return 0;
}
void convert(float x)
{
    printf("%.2f", x);
}