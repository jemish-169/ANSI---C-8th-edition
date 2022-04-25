/*
Write a funcion day_name that receves a number n and retums a pointer to a character stning
containing the name of the corresponding day. The day names should be kept in a static table
of character strings local to the funcdon.
*/
#include<stdio.h>
#include<string.h>
char* day(int* n)
{
    char* name[10];
    switch (*n)
    {
    case 1:
        *name = "monday";
        break;
    case 2:
        *name = "tuesday";
        break;
    case 3:
        *name = "wednesday";
        break;
    case 4:
        *name = "thurday";
        break;
    case 5:
        *name = "friday";
        break;
    case 6:
        *name = "saturday";
        break;
    default:
        *name = "sunday";
        break;
    }
    return *name;
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n >= 1 && n <= 7)
        printf("the day is %s", day(&n));

    return 0;
}