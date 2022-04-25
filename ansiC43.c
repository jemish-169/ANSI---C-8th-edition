/*
A set of two linear equations with two unknowns x1 and x2 is given below:
ax, +bx, =m
*/
#include <stdio.h>
int main()
{
    int x1, x2, a = 1, b = 2, c = 3, d = 4;
    printf("enter values of x1 and x2 : ");
    scanf("%d%d", &x1, &x2);
    printf("\nax1 + bx2 = %d", a * x1 + b * x2);
    printf("\ncx1 + dx2 = %d", c * x1 + d * x2);

    return 0;
}