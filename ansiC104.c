/*
Write a function exchange to interchange the values of two variables, say x and y. Ilustrate the
use of this function, in a calling function. Assume that x and y are defined as global variables.
*/
#include<stdio.h>
void exchange(int, int);
int main()
{
    int a, b;
    printf("enter 2 values :\n");
    scanf("%d%d", &a, &b);
    exchange(a, b);
    return 0;
}

void exchange(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a is %d\nb is %d", y, x);
}