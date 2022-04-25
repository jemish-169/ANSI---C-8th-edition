/*
Write aprogram to read two strings andcompare them using the function strmcmp() and prinl a
message that the firsl string is equal, less, or greater than the second one.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10], b[10];
    int i, len;
    printf("Enter your string 1: \n");
    gets(s);
    printf("Enter your string 2: \n");
    gets(b);
    len = strlen(s);
    i = strncmp(s, b, len);
    if (i == 0)
        printf("equal ");
    else if (i < 0)
        printf("less then ");
    else
        printf("greater then ");

    return 0;
}