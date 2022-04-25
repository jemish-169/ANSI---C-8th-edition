/*
The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get
these values from the user and display the prices as follows:
*** LIST OF ITEMS ***
Item   Price
Rice Rs 16.75
Sugar Rs 15.00
*/
#include <stdio.h>
int main()
{
    float a, b;
    printf("write the price of 1 kg rice and sugar : ");
    scanf("%f%f", &a, &b);
    printf("***  LIST OF ITEMS ***");
    printf("list items\n");
    printf("Rice Rs %.2f\n", a);
    printf("Sugar Rs %.2f", b);
    return 0;
}