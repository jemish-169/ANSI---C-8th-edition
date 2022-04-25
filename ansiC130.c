/*
Use the date stucture defined in Exercise 10.4 to store iwo dates. Develop a function that wil
take these two dates as input and compares them.
It returns 1, if the date1 is earlier than date2
It returns 0, if date1 is later date
*/
#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
}s1, s2;
void getdata1()
{
    printf("enter a date: ");
    scanf("%d", &s1.date);
    printf("enter a month: ");
    scanf("%d", &s1.month);
    printf("enter a year: ");
    scanf("%d", &s1.year);
}

void getdata()
{
    printf("enter a date: ");
    scanf("%d", &s2.date);
    printf("enter a month: ");
    scanf("%d", &s2.month);
    printf("enter a year: ");
    scanf("%d", &s2.year);
}
int main()
{
    getdata1();
    getdata();
    printf("Younger in age is : ");
    if (s2.year > s1.year)
        printf("2");
    else if (s2.year < s1.year)
        printf("1");
    else
        if (s2.month > s1.month)
            printf("2");
        else if (s2.month < s1.month)
            printf("1");
        else
            if (s2.date > s1.date)
                printf("2");
            else if (s1.date == s2.date)
                printf("both are same");
            else
                printf("1");
    return 0;
}