/*
Modify the above program such that a function is used to input values to the members and
another function to display the time.
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

int main()
{
    getdata();
    disply(s1);
    return 0;
}