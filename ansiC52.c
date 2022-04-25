/*
An electricity board charges the following rates for the use of electricity:
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs 1.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.
400, then an additional surcharge of 15% of total amount is charged.
*/
#include <stdio.h>
int main()
{
    int unit, price;
    scanf("%d", &unit);
    if (0 < unit <= 200)
    {
        price = unit * 80 / 100;
    }
    else if (200 < unit <= 300)
    {
        price = unit * 90 / 100;
    }
    else
    {
        price = unit;
    }
    if (price < 400)
    {
        price += 100;
    }
    else
    {
        price += 15 / 100 * price;
    }
    printf("price is %d", price);
    return 0;
}