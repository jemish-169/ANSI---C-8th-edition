/*
Write a function that recelves a floating point value x and relurns it as a value rounded to two
nearest decimal places. For example, the value 123.4567 will be rounded to 123.46 (Hint: Seek
help of one of the math functions available in math library).
*/
#include<stdio.h>
#include<math.h>
void calculate(float x)
{
    printf("Rounded value is %.2f", x);
}
int main()
{
    float a;
    printf("Enter a floating point value : ");
    scanf("%f", &a);
    calculate(a);

    return 0;
}