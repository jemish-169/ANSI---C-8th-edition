/*
Write a program to compute and display the sum of all integers that are divisible by 6 but not
divisible by4 and lie between 0 and 100. The program should also count and display the number
of such values.
*/
#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("total number is %d", count);

    return 0;
}