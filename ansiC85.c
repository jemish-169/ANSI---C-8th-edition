/*
Write a program that will count the number occurences of a specified character in a given line of
text. Test your progrem.
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str1[10], str2[10];
    int n, l, i;
    printf("Enter your string : \n");
    gets(str1);
    printf("Enter your character or string which you want to find : \n");
    // scanf("%s", str1);
    gets(str2);
    // printf("\n%s", str1);
     //printf("\n%s", str2);
    l = strlen(str1);
    n = strcmp(str1, str2);
    if (n < 0)
        printf("STRING2 is greater then STRING1");
    else if (n > 0)
        printf("STRING1 is greater then STRING2");
    else
        printf("Both are SAME");


    return 0;
}