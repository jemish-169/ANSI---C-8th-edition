/*
Write a program to print a table of values of the function
Y exp (-x)
for x varying from 0.0 to 10.0 in steps of 0.10. The table should appear as follows:
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double i, j;
    for (i = 1.0; i <= 9.0; i++)
    {
        for (j = 0.0; j <= 0.9; j += 0.1)
        {
            printf("%ld  ", exp((i + j)));
        }
        printf("\n");
    }

    return 0;
}