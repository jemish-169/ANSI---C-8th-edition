/*
Write program to count and print the number of negative and positive numbers in a given set
of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers.
Reading should be terminated when the value 0 is encountered
*/
#include <stdio.h>
int main()
{
    int a[100], i, j, count = 0, mount = 0;
    printf("how many numbers you want to enter: \n");
    scanf("%d", &j);
    printf("enter numbers...\n");
    for (i = 0; i < j; i++)
    {

        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break; /* code */
        }

        /* code */
    }
    for (int k = 0; k <= i; k++)
    {
        /* code */
        if (a[k] < 0)
        {
            count++;
        }
        else
        {
            // printf("hy");
            mount++; /* code */
        }
    }
    printf("\nnumber of positive numbers are %d\nnumbers of negative numbers are %d\n", mount - 1, count);

    return 0;
}