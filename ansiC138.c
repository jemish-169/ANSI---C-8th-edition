/*
Write a program using pointers to read in an array of integers and print its elements in reverse
order.
*/
#include<stdio.h>
int main()
{
    int a[5], * j;
    printf("Enter 5 values : \n");
    for (int i = 0;i < 5;i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = a + 4;j >= a;j--)
    {
        printf("%d ", *j);
    }
    return 0;
}