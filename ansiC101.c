/*
Write a program that will copy m consecuive characters from a string s1 beginning at position n
into another string $2.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10], s2[10];
    printf("enter a string 1:");
    gets(s);
    strncpy(s2, s, 4);
    puts(s2);

    return 0;
}