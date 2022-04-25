/*
Modify the input function used in Exercise 10.4 such that it reads a value that represents the date
in the form of a long integer, ike 19450815 for the date 15-8-1945 (August 15, 1945) and assigns
suitable values to the members day, month and year.
Use suilable alyuriln tu wveil ie luing integer 19450815 intu yeat, Ili ad day.
*/
#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
}s1;
void disply(struct date s1)
{
    switch (s1.month)
    {
    case 1:
        printf("january ");
        break;
    case 2:
        printf("fabruary ");
        break;
    case 3:
        printf("march ");
        break;
    case 4:
        printf("april ");
        break;
    case 5:
        printf("may ");
        break;
    case 6:
        printf("june ");
        break;
    case 7:
        printf("july ");
        break;
    case 8:
        printf("august ");
        break;
    case 9:
        printf("september ");
        break;
    case 10:
        printf("october ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
        break;
    default:
        //printf("Enter proper value :");
        break;
    }
    printf("%d, %d", s1.date, s1.year);
}

int main()
{
    int num, num2;
    printf("Enter number : ");
    scanf("%d", &num2);
    // printf("%d\n", num2);
    num = 0;
    num = num2 % 100;
    num2 = num2 / 100;
    s1.date = num;
    num = num2 % 100;
    num2 = num2 / 100;
    s1.month = num;
    s1.year = num2;
    disply(s1);
    return 0;
}