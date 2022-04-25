/*
Write a program that prompts the user for two files, one containing a line of text known as source
file and other, an empty file known as target fhle and then copies the contents of source file into
target file
Modify the program so that a specified character is deleted from the source fle as it is copied to
ne target ne.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main() {
    FILE* fp1, * fp2;
    char ch;

    fp1 = fopen("Sample.txt", "r");
    fp2 = fopen("Output.txt", "w");

    while (1) {
        ch = fgetc(fp1);

        if (ch == EOF)
            break;
        else
            putc(ch, fp2);
    }

    printf("File copied Successfully!");
    fclose(fp1);
    fclose(fp2);
}