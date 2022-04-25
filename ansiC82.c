/*
Selection sort is based on the following idea:
Selecting the largest array element and swapping it with the last array element leaves an
unsorted list whose size is 1 less than the size of the original list. if we repeat this step again on
the unsorted list we will have an ordered list of size2 and an unordered list size n-2. When we
repeat this until the size of the unsorted list becomes one, the result will be a sorted list.
Write a program to implement this algorithm.
*/
#include<stdio.h>
int main()
{
    int a[5], i, j, temp;
    printf("Enter 5 values : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0;i < 5;i++)
    {
        for (j = 0;j < 5;j++)
        {
            if (a[j] > a[i])
            {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                // printf("hy");
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }

    return 0;
}