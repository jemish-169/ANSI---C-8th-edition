/*
Develop your own functions for pertornming tollowing operations on strings:
(a) Cuyyhy ue slulry lu aulier
(D) Comparing two sirings
(c) Addinga string to the end of another string
Write a driver program to test your functions
*/
#include<stdio.h>
#include<string.h>
int copy(char line1[], char line2[])
{
    strcpy(line2, line1);

    return line2;
};

int compare(char line1[], char line2[])
{
    int i;
    i = strcmp(line2, line1);

    return i;
};

int conket(char line1[], char line2[])
{
    strcat(line1, line2);

    return line2;
};
int main()
{
    char str1[20], str2[20], str[30];
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str);
    printf("copid string 2 is : %s\n", copy(str1, str2));
    printf("comperision is : %ld\n", compare(str1, str));
    printf("joined string 1 and string 2 is : %s\n", conket(str1, str));


    return 0;
}