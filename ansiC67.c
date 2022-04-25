
/*
3 Write a program to compute the value of Euler's number e, that is used as the base of natural
ogarihms. Use the tollowing tormula.
e1+1/11+1/211 /31+..+1 in! Use a suitable loop construct. The loop must terminate when the difference between two
successive values of e is less than 0.00001.
*/
#include <stdio.h>
int main()
{
    int i, j, k, num;
    float res = 0, mul = 1;
    printf("enter number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        k = 1;
        for (j = 2; j <= i; j++)
        {
            k = k * j;
        }
        if (mul - (float)k > 0.00001)
        {
            continue;
        }
        mul = (float)k;
        // printf("%f", mul);
        res = res + (1 / mul);
    }
    printf("%f", res);
    return 0;
}