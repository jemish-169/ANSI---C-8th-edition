/*
Write a program to read and display the following table of data.
Name Code nce
*an b/837 1234.5
Motor 450 5786.76
The name and code must be left-justfied and price must be night-justfed
*/
#include <stdio.h>
int main()
{
    char str1[10], str2[10];
    int code1, code2;
    float a1, b2;
    scanf("%s%d%f", &str1, &code1, &a1);
    scanf("%s%d%f", &str2, &code2, &b2);
    printf("\n%s %-4.0d %-8.2f", str1, code1, a1);
    printf("\n%s %-4.0d %-8.2f", str2, code2, b2);

    return 0;
}