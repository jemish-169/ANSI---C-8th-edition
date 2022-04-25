/*
Using pointers, write a function that receivesa character string and a character as argument and
deletes all occurences of this character in the string. The function should retum the corected
string witn no holes.
*/
#include<stdio.h>
#include<string.h>
char* correct(char* str)
{
    char c;
    int j = 0, x = 0;
    printf("Enter a word that you want to remove :");
    scanf("%c", &c);
    do
    {
        for (int i = 0;i < 10;i++)
        {
            if (*(str + i) == c)
            {
                j = i;
                ++x;
            }
        }
        // printf("%d ", x);
        for (int k = j;k < 10;k++)
        {
            *(str + k) = *(str + k + 1);
        }
        --x;
    } while (x != 0);
    return str;
}
int main()
{
    char name[10];
    char* cptr = name;
    printf("Enter 10 alphabet string : ");
    gets(name);
    correct(cptr);
    puts(name);
    return 0;
}