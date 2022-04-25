/*
Rewrite the program of case study 6.4 (plotting of two cunves) using else...f constructs instead
of continue statements.
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