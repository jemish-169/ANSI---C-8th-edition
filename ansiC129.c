/*
Add a function called nextdate to the program designed in Exercise 10.4 to perfom the following
task
Accepts two arguments, one of the structure data containing the present date and the
second an integer that represents the number of days to be added to the present date.
Adds the days to the present date and returns the structure containing the next date
correctly.
Note that the next date may be in the next month or even the next year
*/
#include<stdio.h>
struct time
{
    int year;
    int month;
    int date;
};
struct time s1;
void getdata()
{

    printf("Enter a date : ");
    scanf("%d", &s1.date);
    printf("Enter a month : ");
    scanf("%d", &s1.month);
    printf("Enter a year : ");
    scanf("%d", &s1.year);
}
void disply(struct time s1)
{
    printf("\n----------------------------------------------------\n");
    printf("%d : %d : %d", s1.date, s1.month, s1.year);

}
void update()
{
    if (s1.date < 30)
        s1.date++;
    else
        if (s1.month < 30)
        {
            s1.month++;
            s1.date = 00;
        }
        else
        {
            s1.year++;
            s1.month = 00;
            s1.date = 00;
        }
}

int main()
{
    getdata();
    int n;
    printf("How many days you want to add :");
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        update(s1);
    }
    disply(s1);
    return 0;
}