/*
Write a function thal takes an inleger parameter m representing the month number of the year
and returns the corresponding name of the month. For instance, if m= 3, the month is March.
est your program
*/
#include<stdio.h>
void locate(int num)
{
    switch (num)
    {
    case 1:
        printf("January ");
        break;

    case 2:
        printf("fabruary ");
        break;

    case 3:
        printf("March ");
        break;

    case 4:
        printf("April ");
        break;

    case 5:
        printf("May ");
        break;

    case 6:
        printf("June ");
        break;

    case 7:
        printf("July ");
        break;

    case 8:
        printf("August ");
        break;

    case 9:
        printf("September ");
        break;

    case 10:
        printf("October ");
        break;

    case 11:
        printf("November ");
        break;

    case 12:
        printf("Deember ");
        break;

    default:
        printf("Enter proper number");
        break;
    }
}
int main()
{
    int month;
    printf("Enter a month number :\n");
    scanf("%d", &month);
    locate(month);
    return 0;
}