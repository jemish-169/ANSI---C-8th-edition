/*
write a c program to disply the value of X whwre X=(a+b)/c
*/
#include<stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("Enter value of a,b,c :\n");
    scanf("%d%d%d", &a, &b, &c);
    x = ((float)a + (float)b) / (float)c;
    printf("\n value of X is %f", x);

    return 0;
}