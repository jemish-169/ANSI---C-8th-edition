/*
A cdoth showroom has announced the following seasonal discoOunts on purchase of items:
Purchase amount Discount
MI Cloth
0-10
101-2 200 7 7.5%
201-30 5% 10.0%
Above 3 00 10.07% 15.0%
Write a program using switch and f statements to compute the net amount to be paid by a
Customer.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 0 ... 100:
    {
        printf("discount on mill is 0\ndiscount on handloom is 5%");
        break;
    }

    case 101 ... 200:
    {
        printf("discount on mill is 5% \ndiscount on handloom is 7.5%");
        break;
    }

    case 201 ... 300:
    {
        printf("discount on mill is 7.5%\ndiscount on handloom is 10%");
        break;
    }

    default:
    {

        printf("on mill 10\% and om handloom 15% ");
        break;
    }
    }

    return 0;
}