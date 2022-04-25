/*
Write a program that will road a positive integer and determine and print ite binary quivalent.
Hint: The bits of the binary representation of an integer can be generaled by repeatedly dividing
the number and the successive quotients by 2 and saving the remalnder, which is either 0 or 1,
after each division.)
*/
#include <stdio.h>
int main()
{
    int i = 0, final, flag = 0, sum = 0, n, div, k, l = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        div = n % 2;
        sum = sum * 10 + div;
        n /= 2;
        flag++;
    }
    for (int j = 0; j < flag; j++)
    {
        k = sum % 10;
        l = l * 10 + k;
        sum /= 10;
    }

    printf("%d", l);

    return 0;
}