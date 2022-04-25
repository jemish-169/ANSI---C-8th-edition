/*
Wrtoa program to roplacoa partioular word by anothor word in a givon ctring. For oxamplo,
the word "PASCAL" should be replaced by "C in the text "It is good to program in PASCAL language.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30], name[10], temp, word[10];
    int len, j, k, len2, i;
    printf("Enter a statement : \n");
    gets(str);
    printf("Enter a word which you want to replace : \n");
    gets(name);
    printf("Enter that word : \n");
    gets(word);
    len = strlen(str);
    len2 = strlen(name);
    for (j = 0; j < len; j++)
    {
    a1:
        if (name[0] == str[j])
        {
            for (k = 0;k < len2;k++)
            {
                if (name[k] != str[j + k])
                {
                    goto a1;
                    //printf("hy");
                }
                if (k < len2)
                {
                    for (i = 0; i < len2; i++)
                    {
                        str[i + j] = word[i];
                    }
                    j += len2;
                    goto a1;
                }
            }
        }
    }
    printf("\n%s", str);
    return 0;
}