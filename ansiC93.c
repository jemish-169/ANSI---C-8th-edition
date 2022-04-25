/*
Write a program which will read a string and rewrite it in the alphabetical order. For example, the
word STRING should be written as GINRST.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20], temp;
    int len, j;
    printf("Enter a string : ");
    gets(name);
    len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (name[i] < name[j])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }

    }
    printf("%s", name);


    return 0;
}