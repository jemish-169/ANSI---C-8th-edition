/*
Write a program to read the age of 100 persons and count the number of persons in the age
group 50 to 60. Use for and continue statements.
*/
#include <stdio.h>
int main()
{
    int a[5];
    printf("enter age of 5 person : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 50 && a[i] < 60)
        {
            printf("%d nunber is between 50 - 60.", i + 1);
        }
    }

    return 0;
}