/*
Wte a tuncion prime tnat returns
s
argument is a prime numoer and reurns zero onerwise
*/
#include<stdio.h>
int binary(int x)
{
    if (x % 2 == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int num;
    printf("Enter value :");
    scanf("%d", &num);
    printf("%d", binary(num));

    return 0;
}