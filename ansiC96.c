/*
Write a program that reads a string from the keyboard and delermines whether the string is a
palindrome or not. (A string is a palindrome if it can be read from left and right with the same
meaning. For example, Madam and Anna are palindrome strings. Ignore capitalization).
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int count = 0, len;
    printf("enter string : ");
    gets(str);
    len = strlen(str);
    for (int i = 0;i < len;i++)
    {
        if (str[i] == str[len - i - 1])
            count++;
    }
    if (count == len)
        printf("YES..it is pelindrome");
    else
        printf("No..it is not");
    return 0;
}