/*
Admission to a professional course is subject to the following conditions5
a) Mas in MathemaliCS 60
(6) Marks in Physics >= 50
(C) Marks in Chemistry> 40
(d) Total in all three subjects >= 200
or
Tolal in Mathematics and Physics >= 150
Given the marks in the three subjects, write a program to process the applications to list the
eligible candidates.
*/
#include <stdio.h>
int main()
{
    int phy, chem, math;
    scanf("%d%d%d", &phy, &chem, &math);
    if (phy >= 60 && chem >= 50 && math >= 40 && (phy + chem + math) >= 200)
    {
        printf("addmission confirmed...!!");
    }
    else if ((phy + math) >= 150)
    {
        printf("admission confirmed...!!");
    }
    else
    {
        printf("admission not confirmed,, SORRY!!");
        /* code */
    }

    return 0;
}