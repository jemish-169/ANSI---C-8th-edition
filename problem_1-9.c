/*
write a program to convert temperature celcuis to ferenhit and vice-versa.
*/
#include<stdio.h>
int main()
{
    int n, temp;
    printf("1 for celcuis to ferenhit.\n2 for ferenhit to celcius ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter temp. in celcius : ");
        scanf("%d", &temp);
        printf("temperature in ferenhit is %d", ((9 * temp) / 5) + 32);
        break;
    case 2:
        printf("Enter temp. in ferenhit : ");
        scanf("%d", &temp);
        printf("temperature in celcius is %d", (temp - 32) * 5 / 9);
        break;

    default:
        break;
    }
    return 0;
}