/*
The numbers in the sequence
112358 13 21
are called Fibonacci numbers. Write a program using a do....whlle loop to calculate and print the
first m Fibonacci numbers
(Hint: After the first two numbers in the series, each number is the sum of the two preceding
numbers.)
*/
#include <stdio.h>
int main()
{
    int sum = 0, n, n1 = 0, n2 = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = n1 + n2;
        printf("%d ", n2);
        n1 = n2;
        n2 = sum;
    }

    return 0;
}