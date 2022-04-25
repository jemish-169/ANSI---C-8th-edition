/*
Given three values. write a program to read three values from keytboard and print out the largest
of them without using if statement.
*/
#include <stdio.h>
int main()
{
    int a, b, ad, c;
    printf("enter 3 values: ");
    scanf("%d%d%d", &a, &b, &c);
    ad = a > b ? a > c ? a : c : b > c ? b
                                       : c;
    printf("maximum is %d", ad);
    return 0;
}