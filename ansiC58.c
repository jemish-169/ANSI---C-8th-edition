/*
Write a program to compute the sum of the digits of a given integer number.
*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (n % 10);
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}