/*
Write a program to read a line of text from the keyboard and print out the number of occurrences
of a given substring using the function strstr ().
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10], a[5];
    printf("Enter string 1:\n");
    gets(s);
    printf("Enter string 2:\n");
    gets(a);
    if (strstr(s, a) == 0)
        printf("it is not");
    else
        printf("YES,, it is...");
    return 0;
}