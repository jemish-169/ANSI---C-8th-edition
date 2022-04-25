/*
Write a program to read a four digit integer and print the sum of its digts.
*/
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter number : ");
    scanf("%d", &num);
    for (int i = 0; i < 100; i++)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("%d", sum);

    return 0;
}