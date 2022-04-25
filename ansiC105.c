/*
Write a function space(x) that can be used to provide a space of x positions between two output
numbers. Demonstrate Iis application.
*/
#include<stdio.h>
int space(int x, int y, int z)
{
    printf("%d", x);
    for (int i = 1; i <= z; i++)
    {
        printf(" ");
    }
    printf("%d", y);

}
int main()
{
    int num1, num2, x;
    printf("enter 2 numbers : \n");
    scanf("%d%d", &num1, &num2);
    printf("how many space you want to include :");
    scanf("%d", &x);
    space(num1, num2, x);
    return 0;
}