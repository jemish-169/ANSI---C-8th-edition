/*2.1 Write a program to determine and print the sum of the following harmonic series for a given value
of n:
1+ 1/2 +1/3 +...+ 1/n
The value of n should be given interactively through the terminal.*/

#include <stdio.h>
int main()
{
    float num, sum = 0.0;
    printf("Enter how many data you want to add: ");
    scanf("%f", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + 1 / (float)i;
    }
    printf(" sum is %.3f", sum);
    return 0;
}