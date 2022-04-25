/*
6.6 Write a program to evaluate the following investment equation
V= P(1+r"
and print the tables which would give the value of V for various combination of the following
values of P,, and n.
P: 1000, 2000, 3000,. 10,000
r:0.10, 0.11,0.12, , 0.20
n:1,2. 3, 10
(Hint: P is the principal amount and V is the value of money at the end of n years. This equation
can be recursively wnitten as
VPP( 1+r)
P V
That is, the value of money at the end of first year becomes the princlpal amount for the next year
and so on.
*/
#include <stdio.h>
int main()
{
    int j, r = 0.10;
    float v = 0, n = 1, p = 1000;
    for (n = 1; n <= 10; n++)
    {
        v = p * (1 + r);
        printf("%f ", v);
        // printf(" %f", n);
        p = v;
        r += 0.1;
    }
    return 0;
}