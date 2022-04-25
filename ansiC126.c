/*
Design a function update that would accept the data structure designed in Exercise 10.1 and
increments time by one second and returns the new time. (f the increment results in 60 seconds
then the second member is set to zero and the minute member is incremented by one. Then,
the result is 60 minutes, the minute member is set to zero and the hour member is incremented
by one. Finally when the hour becomes 24, it is set to zero.)
*/
#include<stdio.h>
struct time
{
    int hour;
    int min;
    int sec;
};
struct time s1;
void getdata()
{

    printf("Enter a hour : ");
    scanf("%d", &s1.hour);
    printf("Enter a minute : ");
    scanf("%d", &s1.min);
    printf("Enter a second : ");
    scanf("%d", &s1.sec);
}
void disply(struct time s1)
{
    printf("\n----------------------------------------------------\n");
    printf("%d : %d : %d", s1.hour, s1.min, s1.sec);

}
void update()
{
    if (s1.sec < 60)
        s1.sec++;
    else
        if (s1.min < 60)
        {
            s1.min++;
            s1.sec = 00;
        }
        else
        {
            s1.hour++;
            s1.min = 00;
            s1.sec = 00;
        }
}

int main()
{
    getdata();
    update(s1);
    disply(s1);
    return 0;
}