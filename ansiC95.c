/*
A Maruti car dealer maintains a record of sales of various vehicles in the following form:
--Vehicle type
--Month of sales
--Price
Write a program to read this data into a table of strings and output the details of a particular
vehicle sold during a specified period. The program should request the user to input the vehicle
type and the period (starling month, ending month).
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char type[3][10], mos[3][6];
    int price[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter vehical %d type : \n", i + 1);
        // puts(type[i]);
        gets(type[i]);
        printf("Enter vehical %d month of sale : \n", i + 1);
        gets(mos[i]);
        printf("Enter vehical %d price : \n", i + 1);
        scanf("%d", &price[i]);
    }
    printf("type\tMonthOfSale\tprice");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\t%s\t%d", type[i], mos[i], price[i]);
    }




    return 0;
}