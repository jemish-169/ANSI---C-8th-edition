/*
Write a program that prints the value 10.45678 in exponential format with the folliowing
specifications:
(a) correct to two decimal places.
(D) correct to four decimal places, and
w ect
lo eight decimal nl
*/
#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.2lf\n", a);
    printf("%.4lf\n", a);
    printf("%.8lf\n", a);

    return 0;
}