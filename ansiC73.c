/*
Given a set of 10 two-digit integers containing both positive and negative values, write a program
using for loop lo compute the sum of all posilive values and print the sum and the number of
values added. The program should use scanf to read the values and terminate when the sum
exceeds 999. Do not use goto statement.
*/
#include<stdio.h>
int main()
{
    int a[9], sum = 0;
    printf("Enter 10 numbers : \n");
    for (int i = 0;i < 10;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0;i < 10;i++)
    {
        if (a[i] > 0 && sum < 999)
        {
            sum += a[i];
        }
    }
    printf("sum is %d", sum);
    return 0;
}