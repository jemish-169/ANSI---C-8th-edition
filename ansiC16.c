/*
The straight-line method of computing the yeary depreciation of the value of an item is given by
urchase Price-Sakage Value
Depreciation= Years of Service
Write a program to determine the salvage value of an item when the purchase price. years of service. and the annual
depreciation are given.
*/
#include <stdio.h>
int main()
{
    float year, p_price;
    float depreciation, s_value;
    printf("enter years of service : ");
    scanf("%f", &year);
    printf("enter depreciation : ");
    scanf("%f", &depreciation);
    printf("enter pursche price : ");
    scanf("%f", &p_price);
    s_value = p_price - depreciation * year;
    printf("%.2f", s_value);
    return 0;
}