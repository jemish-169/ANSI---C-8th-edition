/*
Write a function that receives a sorted aray of integers and an integer value, and inserts the
value in ts cOrect place.
*/
#include<stdio.h>
void array(int x, int* a)
{
    int n;
    printf("Enter a number that you want to add : ");
    scanf("%d", &n);
    *(a + 5) = n;
    for (int i = 0;i < x + 1;i++) {
        printf("%d ", *a);
        a++;
    }
}
int main()
{
    int b[10];
    printf("Enter 5 value :\n");
    for (int i = 0;i < 5;i++)
        scanf("%d", &b[i]);
    array(5, b);
    return 0;
}