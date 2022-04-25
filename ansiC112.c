/*
Develop a top down modular pros
the user to input two numbers and display one of the following as per the desire of the user:
(a) Sum of the numbers
(b) Difference of the numbers
(c) Product of the numbers
(d) Division of the numbers
*/
#include<stdio.h>
float calculator(int a, int b, char s)
{
    switch (s)
    {
    case '*':
    {
        return a * b;
        break;
    }
    case '%':
    {
        return a % b;
        break;
    }
    case '-':
    {
        return a - b;
        break;
    }
    case '+':
    {
        return a + b;
        break;
    }
    case '/':
    {
        return a / b;
        break;
    }

    default:
    {
        printf("enter proper value");
        break;
    }
    }
}
int main()
{
    int num1, num2;
    char c;
    printf("choose operation(*,/,+,-,%) : ");
    scanf("%c", &c);
    printf("Enter number 1 and number 2 : ");
    scanf("%d%d", &num1, &num2);
    printf("answer is : %.2f", calculator(num1, num2, c));

    return 0;
}