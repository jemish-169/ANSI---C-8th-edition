/*
Write a program that reads a file containing integers and appends at its end the sum of all the
integers.
*/
#include<stdio.h>
#include<conio.h>
#include<process.h>

int main()
{
    int a, i, n, sum = 0;
    FILE* fp;
    fp = fopen("DATA", "w");
    if (fp == NULL)
    {
        printf("File could not open!");
        exit(0);
    }

    printf("How many numbers : ");
    scanf(" %d", &n);
    printf("Enter numbers in the file:  \n");

    for (i = 0;i < n;++i)
    {
        scanf("%d", &a);
        putw(a, fp);
    }
    fclose(fp);
    fp = fopen("DATA", "r");
    if (fp == NULL)
    {
        printf("File could not open!");
        exit(0);
    }

    while ((a = getw(fp)) != EOF)
        sum += a;

    fclose(fp);
    fp = fopen("DATA", "a");
    if (fp == NULL)
    {
        printf("File could not open!");
        exit(0);
    }

    putw(sum, fp);
    fclose(fp);
    fp = fopen("DATA", "r");
    if (fp == NULL)
    {
        printf("File could not open!");
        exit(0);
    }

    printf("\nFile after append : \n");
    while ((a = getw(fp)) != EOF)
        printf("%d ", a);

    fclose(fp);
}
