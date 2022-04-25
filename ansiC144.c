/*
Write a program to read in an aray of names and to sort them in aiphabetical order. Use sot
function that receives pointers to the funchons strcmp and swap.sort in tum should call these
functions via the pointers.
*/
#include<stdio.h>
#include<string.h>
char* sort(int x, char* name)
{
    int k;
    char temp;
    for (int i = 0;i < x;i++)
    {
        for (k = 0;k < x;k++)
        {
            if ((*(name + i) > *(name + k)))
            {
                temp = *(name + i);
                *(name + i) = *(name + k);
                *(name + k) = temp;
            }
        }
    }
    printf("%s", name);
}
int main()
{
    // int size;
    // printf("Enter a size of string : ");
    // scanf("%d", &size);
    char a[10];
    printf("Enter a string : ");
    gets(a);
    sort(10, a);
    // printf("%s", a);
    return 0;
}