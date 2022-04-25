/*
The total distance traveled by a vehidle in fseconds is gven by
nenn umber
Vhere u is the inital vo (ary2
Write a program to evaluate the distance travelled at regular intervals of time. given the values of
u and a. The program should provide the fexibility to the user to select his own time intervals and
repeat the caiculabons 1or diterent values of u and 8.
*/
#include <stdio.h>
int main()
{
    int j;
    do
    {
        float d, u, a, t;
        printf("enter the initial velocity : ");
        scanf("%f", &u);

        printf("enter the accleration : ");
        scanf("%f", &a);

        printf("enter the time : ");
        scanf("%f", &t);

        d = (u * t) + (a * t * t * 0.5);
        printf("%f\n", d);
        printf("if you want to calculate distance then only press 1 : ");
        scanf("%d", &j);

        /* code */
    } while (j == 1);

    return 0;
}