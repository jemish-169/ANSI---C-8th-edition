/*
Design a structure student _record to contain name, date of birth and total marks obtained.
the date structure designed in Exercise 10.4 to represent the date of birth.
Develop a program to read data for 10 students ina class and list them rank-wise.
*/
#include<stdio.h>
struct record
{
    char name[20];
    // long int dob;
    int marks;
}s[4], temp;

int main()
{
    int p, j;
    for (int x = 0;x < 4;x++)
    {
        printf("Enter %d student name amd marks :\n", x + 1);
        scanf("%s%d", &s[x].name, &s[x].marks);
    }

    for (p = 0;p < 3;p++)
    {
        for (j = 0;j < 4 - p - 1;j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("\nsorted order for marks : \n");
    for (int i = 0;i < 4;i++)
    {
        printf("%s\t%d\n", s[i].name, s[i].marks);
    }

    return 0;
}