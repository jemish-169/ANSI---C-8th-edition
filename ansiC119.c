/*
Write a program that invokes a function called find() to perform the following tasks:
(a) Receives a character array and a single character.
(b) Retuns 1 if the specified character is found in the array. 0 otherwise.
*/
#include<stdio.h>
#include<string.h>
int find(char x[], char y[])
{
    if (strstr(y, x) == NULL)
        return 0;
    else
        return 1;
}
int main()
{
    char a[20], c[2];
    printf("Enter a string : \n");
    gets(a);
    printf("Enter a character : \n");
    scanf("%s", &c);
    printf("%d\n", find(c, a));

    return 0;
}