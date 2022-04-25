/*
Write an interactive program thal could read a positive integer number and decide whelther the
number is a prime number and display the output accordingly.
Modify the program to count all the prime numbers that lie between 100 and 200.
NOTE: A prime number is a positive integer that is divisible only by 1 or by itse
*/
#include <stdio.h>
int main()
{
    int j, flag = 0;
    for (int i = 100; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }

        if (flag == 0)
        {
            printf("%d ", i);
        }
        flag = 0;
    }

    return 0;
}