/*
Write a program to read the data and determine the following:
(a) Total marks obtained by each student
(6) The highest marks in each subject and the Roll No. of the student who secured it.
(C) The student who obtained the highest total marks.
*/
#include<stdio.h>
int main()
{
    int sum[3], sub[3][5] = { 0 }, k, l, j;

    for (int i = 0;i < 5;i++)
    {
        printf("enter marks of STUBJECT %d for all for student :\n", i + 1);
        for (j = 0;j < 3;j++)
        {
            scanf("%d", &sub[i][j]);
        }
    }
    for (int i = 0;i < 5;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf("%d", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}