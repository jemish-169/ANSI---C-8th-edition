/*
Write a program to read the name ANIL KUMAR GUPTAin three parts using the scanf statement
and to display the same in the folowing fomat using the printt stalement.
(a) ANIL K. GUPTA
() AK. GUPTA
(c) GUPTAAK
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char str1[10] = "ANIL";
    char str2[10] = "KUMAR";
    char str3[10] = "GUPTA";
    printf("%s %.1s %s\n", str1, str2, str3);
    printf("%.1s %.1s %s\n", str1, str2, str3);
    printf("%s %.1s %.1s\n", str3, str1, str2);
    return 0;
}