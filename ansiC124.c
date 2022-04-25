/*
Define a structure data type called time struct containing three members integer hour, integer
minute and integer second. Develop a program that would assign values to the individual
members and display the time in the following for
*/
#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time s1;
    printf("Enter a hour : ");
    scanf("%d", &s1.hour);
    printf("Enter a minute : ");
    scanf("%d", &s1.min);
    printf("Enter a second : ");
    scanf("%d", &s1.sec);
    printf("\n----------------------------------------------------\n");
    printf("%d : %d : %d", s1.hour, s1.min, s1.sec);

    return 0;
}