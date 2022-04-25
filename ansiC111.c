/*
te
aTuncuon that w.SCan a character sinng passed as an argument and covert al lowercase
*/
#include<stdio.h>
#include<string.h>
void converter(char str1[])
{
    int l = strlen(str1);
    for (int i = 0;i < l;i++)
    {
        str1[i] -= 32;
    }
    puts(str1);
}
int main()
{
    char str[10];
    printf("Enter string :");
    gets(str);
    converter(str);
    return 0;
}