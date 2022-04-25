/*
Given a number, write a program using while loop to reverse the digits of the number. For
example, the number
12345
should be written as
54321
*/
#include <stdio.h>
int main()
{
    int a, n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++)
    {
        a = n % 10;
        sum = sum * 10 + a;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}