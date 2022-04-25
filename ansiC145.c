/*
write a function (using a pointer parameter) that reverses the elements of a given array
*/
#include<stdio.h>
void* reverse(int b, int* x)
{
    int temp, mid = b / 2;
    for (int j = 0;j <= mid;j++)
    {
        temp = x[j];
        x[j] = x[b - 1 - j];
        x[b - 1 - j] = temp;
    }
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", x[i]);
    }
}
int main()
{
    int a[10];
    printf("Enter 10 values : \n");
    for (int i = 0;i < 10;i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(10, a);
    return 0;
}