/*
Modity the program of Exercise 6.16 to print the character O instead of S at the center of the
square as shown below.
*/
#include<stdio.h>
int main()
{


    for (int i = 1;i <= 5;i++)
    {
        for (int j = 1;j <= 5;j++)
        {
            if (i == 3 && j == 3)
                printf("O ");
            else
                printf("S ");
        }
        printf("\n");
    }

    return 0;
}