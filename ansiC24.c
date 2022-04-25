/*
Write a program to read two integer values m and n and to decide and print whether m is a
muuple orn.
*/
#include <stdio.h>
int main()
{
    int m, n;
    printf("ENTER value of M and N: \n");
    scanf("%d%d", &m, &n);
    if (n % m == 0)
    {
        printf("yes it is.");
    }
    else
    {
        printf("no it is not");
    }

    return 0;
}