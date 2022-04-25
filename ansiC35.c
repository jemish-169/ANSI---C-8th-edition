/*
Wrte an interactve program to demonstrate the process of multiplication. The program should
ask the user to enter two wo-digit integers and print the product of integers as shown below
*/
#include <stdio.h>
int main()
{
    int c, a, b;
    printf("enter first number :\n");
    scanf("%d", &a);

    printf("enter second number :\n");
    scanf("%d", &b);
    c = b % 10;
    b = b / 10;
    printf("%d * %d = %d\n", a, c, a * c);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("add them \n%d", a * c + a * b);

    return 0;
}