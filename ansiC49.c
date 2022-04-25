/*
Write a program that will read the value of x and evaluate the following function
for x 0
y for x=0
-1 for x <0
using
(a) nested f statemets,
(6) else if statements, and
(C)conditional operator ?
*/
#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    /*if (n < 0)
        printf("-1");

    else if (n == 0)
        printf("0");
    else
        printf("1");
    
    */

    /*  printf("%d", n > 0 ? 1 : n < 0 ? -1
                                   : 0);
*/
    if (n > 0)
    {
        printf("1");
    }
    else
    {
        if (n == 0)
            printf("0");
        else
            printf("-1");
    }
    return 0;
}