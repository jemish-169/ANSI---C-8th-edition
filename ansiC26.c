/*
The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above
100 calls. Write a program to read customer codes and cals made and print the bill for each
cUstomer.00
*/
#include <stdio.h>
int main()
{
    int calls, i;
    float bill;
    printf("enter calls: ");
    scanf("%d", &calls);
    if (calls > 100)
    {
        for (i = 100; i < calls; i++)
        {
            bill += 1.25;
        }
    }
    printf("total bill is %0.2f", bill + 250);
    return 0;
}