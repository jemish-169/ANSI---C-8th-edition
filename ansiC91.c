/*
Write a program to extract a portion of a character string and print the extracted string. Assume
that m characters are extracted, starting with the nth character
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10], b[10];
    int i;
    printf("Enter your string : \n");
    gets(a);
    printf("how many character you want to in next string : \n");
    scanf("%d", &i);
    strncpy(b, a, i);
    printf("%s", b);
    return 0;
}