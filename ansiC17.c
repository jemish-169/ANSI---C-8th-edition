/*
Write a program that will read a real number from the keyboard and print the following outputin
line:
Smallest integer e given Largest inte9er
ot less than number not greater than
anumber
*/
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    printf("%d\t%d\t%d", x, x - 1, x + 1);
    return 0;
}