/*
The present value (popularly known as book value) of an item is given by the relationship.
c(1-d
where
C original cost
d rate of depreciation (per year)
n number of years
P
present value after y years.
fP is considered the scrap value at the end of useful life of the item, write a program to compute
the useful life in years given the oniginal cost, depreciation rate, and the scrap value.
The program should request the user to input the data interacively.
*/
#include<stdio.h>
int main()
{
    float d, n, c, p, j;
    printf("enter value of N,D,C,P : \n");
    scanf("%f%f%f%f", &n, &d, &c, &p);
    j = 1 - d;
    for (int i = 1;i <= n;i++)
    {
        j *= j;
    }
    printf("answer is %f", j * c);


    return 0;
}