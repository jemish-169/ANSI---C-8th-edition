/*
Write a program to read three integers from the keyboard using one scanf statement and output
them on one line using
(a)three printf statements,
() only one printf with conversion specithers, and
(C) only one printf without conversion specifiers
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 3  INTGEER : ");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    printf("%d\n", a);
    printf("%d %d", a, c);

    return 0;
}