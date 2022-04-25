/*Given the string "WORDPROCESSING. write a program to read the string from the terminal and
display the same in the following formats:
(a)WORD PROCESSING
(D) WORD
PROCESSING
W.P

*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char s[10], d[11];
    printf("Enter the string:   ");
    scanf("%4s%10s", s, d);
    printf("(a)%s %s\n", s, d);
    printf("(b)%s\n%s\n", s, d);
    printf("(c)%.1s.%.1s", s, d);
}