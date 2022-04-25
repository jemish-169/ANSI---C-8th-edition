/*
Write a program to print the size of various data types in C.
*/
#include <stdio.h>
int main()
{
    printf("size of int is : %d\n", sizeof(int));
    printf("size of float is : %d\n", sizeof(float));
    printf("size of char is : %d\n", sizeof(char));
    printf("size of long int is : %d\n", sizeof(long int));
    printf("size of short int is : %d\n", sizeof(short int));
    printf("size of double is : %d\n", sizeof(double));

    return 0;
}