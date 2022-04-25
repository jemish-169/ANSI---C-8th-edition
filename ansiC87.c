/*
Every book published by international publishers should carry an International Standard Book
Number (ISBN). It is a 10 character 4 part number as shown below.
0-07-041183-2
The lirst part denoles the region. the second epresents publisher, the third identifhes the book
and the fourth is the check digit. The check digit is computed as follows:
Sum = (1 x first digit) + (2 x second digit) +(3 x third digit) *
- (9x ninth digit).
Check digit is the remainder when Sum is divided by 11. Write a program that reads a given IsBN
number and checks whether t represents a validSBN.
*/
#include<stdio.h>
int main()
{
    int j, sum = 0, a[10], rem;
    printf("enter a code:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%[^\n]d", &a[i]);
    }
    for (int j = 0;j < 10;j++)
    {
        sum += (a[j] * j);
    }
    printf("\nsum = %d", sum);
    rem = sum % 11;
    printf("\nrem = %d", rem);
    sum = sum / 11;
    if (sum < 999999999)
        printf("\nit is valid.");
    else
        printf("\nit is not valid.");
    return 0;
}