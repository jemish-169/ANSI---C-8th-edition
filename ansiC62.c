/*
Write programs to print the following outputs using for loops.
(6)
22
333
4444
55555
*/
#include <stdio.h>
int main()
{
    /*int j = 1;
    for (int i = 1; i < 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }*/
    int j;
    for (int i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i > j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}