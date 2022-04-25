/*
Define a structure data type named date containing three integer members day, month and
year. Develop an interactive modular program to perform the following tasks;
To read data into structure members by a function
To validate the date entered by another function
To print the date in the format
April 29, 2002
by a third function.
The input data should be three integers like 29, 4, and 2002 corresponding to day, month and
year. Examples of invalid data:
31,4, 2002-April has only 30 days
29, 2, 2002-2002 is not a leap year
*/
#include<stdio.h>
struct time
{
    int date;
    int month;
    int year;
}t1;
void getdata()
{
    printf("enter a date : ");
    scanf("%d", &t1.date);
    printf("enter a month : ");
    scanf("%d", &t1.month);
    printf("enter a year : ");
    scanf("%d", &t1.year);
}
void validate()
{
    int leapyear = 0;
    if (((t1.year % 4 == 0) && (t1.year % 100 != 0)) || (t1.year % 400 == 0))
        leapyear++;
    switch (t1.month)
    {
    case 1:
        if (t1.date > 31)
            printf(" invalid date");
        break;

    case 2:
        if (leapyear != 0 && t1.date > 29)
            printf(" invalid date it is leap year");
        if (leapyear == 0 && t1.date > 28)
            printf(" invalid date");
        break;

    default:
        printf("Enter valid month");
        break;
    }
}
void disply(struct time t1)
{
    printf("\n----------------------------------------------------\n");
    printf("%d : %d : %d", t1.date, t1.month, t1.year);

}
int main()
{
    getdata();
    disply(t1);
    validate();

    return 0;
}