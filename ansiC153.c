/*
Write a program that requests for a file name and an integer, known as ofset value. The program
then reads the file starting from the locabon specifed by the offset value and pints the contents
on the screen
Note:
Ifthe offset value is a positive integer, then printing skips that many lines. Ifit is a negative
number, it prints that many lines from the end of the file. An appropriate eror message should be
printed, if anything goes wrong.
*/
#include <stdio.h>

int main()
{
    char in_name[80];
    FILE* in_file;
    int ch;

    printf("Enter file name:\n");
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
    {
        printf("Can't open %s for reading.\n", in_name);
    }
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            printf("%c ", ch);
        }
        fclose(in_file);
    }
    return 0;
}
