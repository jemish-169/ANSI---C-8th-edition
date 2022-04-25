/*
Write a program that will compute the length of a given character string.
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[20];
    printf("enter string :\n");
    // gets(a); 
    //we can use both but in ges(a) func. whitespace will be considered as part of string
    //but in scanf func. whenever we put whitespace then string will terminated.
    scanf("%s", a);

    printf("length of string is : %d", strlen(a));


    return 0;
}