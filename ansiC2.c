/*Write a program to read the price of an item in decimal form (like 15.95) and print the output in
paise (like 1595 paise).
*/
#include <stdio.h>

int main()
{
    double price;
    scanf("%lf", &price);
    printf("paise = %.3lf", price * 100);

    return 0;
}