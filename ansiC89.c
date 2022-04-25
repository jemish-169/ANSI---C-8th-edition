/*
Write a program, which reads your name from the keyboard and outputs a list of ASCIl codes.
which represent your name.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int l;
    printf("Enter your name : ");
    gets(name);
    l = strlen(name);
    for (int i = 0;i < l;i++)
    {
        printf("%c - %d\n", name[i], name[i]);
    }


    return 0;
}