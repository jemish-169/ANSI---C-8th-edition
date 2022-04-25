/*
Rewrite the program of the Example 6.1 using the for statement
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