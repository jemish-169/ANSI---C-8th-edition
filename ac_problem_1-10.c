/*
area of triengle by S method.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s, a, b, d, c;

    printf("Enter value of a,b,c :\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    d = s * (s - a) * (s - b) * (s - c);
    printf("area of triengle is %f", sqrt(d));
    return 0;
}