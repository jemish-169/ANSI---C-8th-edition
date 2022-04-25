/*
Wnte a program which will read a text and count all occurrences of a particular word
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20], a;
    int len;
    printf("Enter a word :\n");
    gets(str);
    printf("enter a key word which you want to find : ");
    scanf("%c", &a);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == a)
            printf("it occurs at %d\n", i + 1);
    }
    return 0;
}