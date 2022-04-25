/*
The Fibonacci numbers are defined recursively as follows:
1
F. FFnn>2
Write a function that will generate and print the first n Fibonacci numbers. Test the function for
10, and 15
*/
#include<stdio.h>
void fib(int x1, int x2, int num, int term)
{
    if (term != 0)
    {
        printf("%d  ", x2);
        num = x1 + x2;
        x1 = x2;
        x2 = num;
        term--;
        fib(x1, x2, num, term);
    }

}
int main()
{
    int f1 = 1, f2 = 1, sum, terms;
    printf("enter number of terms : ");
    scanf("%d", &terms);

    fib(f1, f2, sum, terms);

    return 0;
}