/*
Write a program lo print a two-dimensional Square Root Table as shown below, to provide the
square root of any number from 0 to 9.9. For example, the value x will give the square root of 3.2
and y the square root of 3.9.
Square Root Table
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float i, root;
    for (float j = 1; j <= 9; j++)
    {
        for (i = 0.1; i <= 0.9; i += 0.1)
        {
            root = i + j;
            printf("%0.3f\t", sqrt(root));
        }
        printf("\n");
    }

    return 0;
}