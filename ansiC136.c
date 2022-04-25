/*
Define a structure called cricket that will describe the following information:
player name
team namee
batting average
USing cricket, declare an array player with 50 elements and write a program to read the
information about all the 50 players and print a team-wise list containing names of players with
their batting average.
*/
#include<stdio.h>
struct cricket
{
    char player[50];
    char team[30];
    float b_avg;
}c[3], temp;

int main()
{
    int p, j;
    for (int x = 0;x < 3;x++)
    {
        printf("Enter %d player name,team,batting average :\n", x + 1);
        scanf("%s%s%f", &c[x].player, &c[x].team, &c[x].b_avg);
    }
    for (p = 0;p < 2;p++)
    {
        for (j = 0;j < 3 - p - 1;j++)
        {
            if (c[j].team[1] > c[j + 1].team[1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
            if (c[j].team[1] == c[j + 1].team[1])
            {
                if (c[j].team[2] > c[j + 1].team[2])
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }

        }
    }
    printf("\nsorted order for team name : \n");
    for (int i = 0;i < 3;i++)
    {
        printf("%s\t%s\t%f\n", c[i].player, c[i].team, c[i].b_avg);
    }

    return 0;
}