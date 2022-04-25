/*
The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
factorial m ml = mx (m-1)X X1.
Write a program that computes and prints a table of factorials for any given m.
*/
#include <stdio.h>
int main()
{
    int n, fact = 1;
    scanf("%d", &n);
    for (int i = n; i > 1; i--)
    {
        fact = fact * n;
        n--;
    }
    printf("%d", fact);

    return 0;
}