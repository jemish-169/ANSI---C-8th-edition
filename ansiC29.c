/*
wnte a program hat determines whether a gven nteger is 0ddor even and dispiays the number
and description on the same line.
*/
#include <stdio.h>
int main()
{
    int x;
    printf("enter value of x : \n");
    scanf("%d", &x);
    if (x == 0)
        printf("it is zero.\n");
    else if (x % 2 == 0)
        printf("this number is even.");
    else
        printf("number is odd.\n");
    return 0;
}