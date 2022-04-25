/*
Write a function (using pointer parameters) that compares two integer arrays to see whether they
are identical. The function returns 1 f they are identical, O othewise.
*/
#include<stdio.h>
int compare(int* x, int* y)
{
    int j;
    for (int i = 0;i < 5;i++)
    {
        if (*(x + i) == *(y + i))
            j++;
    }
    if (j == 5)
        return 1;
    else
        return 0;
}
int main()
{
    int a[5], b[5];
    printf("Enter 1st array : ");
    for (int i = 0;i < 5;i++)
        scanf("%d", &a[i]);
    printf("Enter 2nd array : ");
    for (int i = 0;i < 5;i++)
        scanf("%d", &b[i]);
    printf("Answer is %d", compare(a, b));

    return 0;
}