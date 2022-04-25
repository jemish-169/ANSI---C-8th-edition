/*
The daily maximum temperatures recorded in 10 cities during the month of January (for all 31
days) have been tabulated as follows:
City
ay
2
31
Wnte a program to read the table elements inloa lwo-dimen sional aray temperature, and to find
the city and day corresponding to
*/
#include<stdio.h>
int main()
{
    int j, i, k, arr[3][3];
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int l = 0;l < 3;l++)
    {
        for (k = 0;k < 3;k++)
        {
            printf("%d\t", arr[l][k]);
        }
        printf("\n");
    }

    //printf("%d", arr[1][1]);
    return 0;
}