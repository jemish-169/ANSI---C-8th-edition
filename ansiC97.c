/*
Write program that reads the cost of an item in the form RRRR.PP (Where RRRR denotes
Rupees and PP denoles Paise) and converts the value lo a string of words that expresses the
numeric value in words. For example, if we input 125.75, the output should be "ONE HUNDRED
TWENTY FIVE AND PAISE SEVENTY FIVE
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int len;
    printf("Enter number : ");
    scanf("%s", s);
    len = strlen(s);
    for (int i = 1;i <= len;i++)
    {
        switch (s[i - 1])
        {
        case '1':
            printf("one ");
            break;

        case '2':
            printf("two ");
            break;

        case '3':
            printf("three ");
            break;

        case '4':
            printf("four ");
            break;

        case '5':
            printf("five ");
            break;

        case '6':
            printf("six ");
            break;

        case '7':
            printf("seven ");
            break;

        case '8':
            printf("eight ");
            break;

        case '9':
            printf("nine ");
            break;

        case '0':
            printf("zero ");
            break;

        default:
            printf("and Rupees ");
            break;
        }
    }

    return 0;
}