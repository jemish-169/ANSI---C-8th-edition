/*
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of
students
(a) who have obtained more than 80 marks.
(6) who have obtained more than 60 marks,
(C) who have obtained more than 40 marks,
(d) who have obtained 40 or less marks,
n ne range 81 to 100,
)in the range 61 to 80,
(9) in the range 41 to 60, and
(h) in the range 0 to 40.
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num <= 100)
    {
        if (num > 80)
        {
            printf("more then 80 marks: ");
        }
        else if (num > 60)
        {
            printf("more then 60 marks: ");
        }
        else if (num > 40)
        {
            printf("more then 40 marks: ");
        }
        else if (num > 0)
        {
            printf("more then 00 marks: ");
        }
    }

    return 0;
}