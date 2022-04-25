/*
In preparing the calendar for a year we need to know whether that parlcular year is leap year or
not. Designa functlon leap() that receives the year as a parameler and returns an appropriate
message.
*/
#include<stdio.h>
void leap(int num)
{
    if (((num % 4 == 0) && (num % 100 != 0)) || (num % 400 == 0))
        printf("Yes it is leap year...");
    else
        printf("No it is not...");
}
int main()
{
    int year;
    printf("Enter a year  : ");
    scanf("%d", &year);
    leap(year);

    return 0;
}