/*
Design a function locate () that takes two character arrays s1 and s2 and one integer value m
as parameters and inserts the string 52 into s1 immediately after the index m.
Wrte a program to test the function using a rea-ife sifuation. (Hint: s2 may be a missing word n
s1 that represents a lIne of text).
*/
#include<stdio.h>
#include<string.h>
void locate(int a, char str1[], char str2[])
{
    int len;
    len = strstr(str1, str2);
    if (len == 0)
        printf("Both are not same");
    else if (len != 0)
        printf("Both are same");
}
int main()
{
    int m;
    char s1[m], s2[m];
    printf("Enter a index :\n");
    scanf("%d", &m);
    printf("Enter a string 1 :");
    scanf("%s", &s1);
    printf("Enter a string 2 :");
    scanf("%s", &s2);
    locate(m, s1, s2);

    return 0;
}