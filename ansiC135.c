/*
Define a structure that can describe an hotel. It should have members that include the name,
address. grade, average room charge, and number of rooms.
Write functions to perform the following operations
To print out hotels of a given grade in order of charges
To print out hotels with room charges less thana given value
*/
#include<stdio.h>
struct list
{
    char hotel[100];
    char address[100];
    int grade;
    int chrage;
    int n_room;
};

int main()
{
    int j, l;
    char k;
    struct list s[] = {
    {"South Point Hert","Maxico",3,300,167},
    {"Hotel Moon Rocket","Los Angels",2,500,150},
    {"Tropicana Casino & Resort","Los Vegas",3,100,50},
    {"Rajavir Palace & Resort","India",4,100,50},
    };
    printf("Enter a grade : ");
    scanf("%d", &k);
    for (l = 0;l < 4;l++)
    {
        if (s[l].grade <= k)
            printf("%s %s %d %d %d\n", s[l].hotel, s[l].address, s[l].grade, s[l].chrage, s[l].n_room);
    }
    return 0;
}