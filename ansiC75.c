/*
The following set of numbers is populary known as Pascal's triangle.
10
5
if we denote rows by i and columns by j. then any element (except the boundary elements) in the
triangle is given by
P
P
*P.
Wite a program to calculate the elements of the Pascal triangle for 10 rows and print the results.
*/
#include <stdio.h>

int main()
{
    const int SIZE = 10;
    int previous[SIZE], current[SIZE], i, j, t;


    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == i || j == 0)
            {
                current[j] = 1;
            }
            else
            {
                current[j] = previous[j] + previous[j - 1];
            }
        }



        for (t = 0; t <= i; t++)
        {
            printf("%3d  ", current[t]);
            /* current array is copied to previous */
            previous[t] = current[t];
        }

        printf("\n");
    }
}