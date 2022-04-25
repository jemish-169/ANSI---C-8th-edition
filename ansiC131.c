/*
Define a structure to represent a vector (a series of integer values) and write a modular program
to perform the following tasks:
To
create a vector
To modiíy the value ofa given element
To multiply by a scalar value
To display the vector in the form
(10, 20, 30,.
*/
#include<stdio.h>
struct vector
{
    int i[10];
}s1;

int main()
{
    for (int i = 0;i < 10;i++)
    {
        s1.i[i] = (i + 1) * 10;
    }
    printf("your vector is ");
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", s1.i[i]);
        // s1.i[i] = (i + 1) * 10;
    }


    return 0;
}