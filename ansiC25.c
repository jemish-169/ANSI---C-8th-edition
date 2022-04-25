/*
Wrtea program io read three values using scanf statement and print the folowing results:
(a) Sum of the valuess
() Average of the three values
(C) Largest Ot tne hee
*/
#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter 3 numbers:\n");
    scanf("%d%d%d", &x, &y, &z);
    printf("SUM of 3 values are %d\n", x + y + z);
    printf("AVG of 3 values are %d\n", (x + y + z) / 3);
    printf("maximum of 3 numbers is %d\n", x > y ? x > z ? x : z : y > z ? y
                                                                         : z);

    printf("Minimum of 3 numbers is %d\n", x < y ? x < z ? x : z : y < z ? y
                                                                         : z);

    return 0;
}