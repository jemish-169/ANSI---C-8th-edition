/*
Write programs to evaluate the following functions to 0.0001% accuracy
(a) SinxX-3! + X*5- x'Tl +.
(b) coSx1-x21+ x'141- x/6! .
(C) SUM= 1+(1/2*(1/3 * (1/4'*
*/
#include<stdio.h>
int main()
{
    int i, j, k, num;
    float res = 0, l, mul = 1;
    printf("enter number:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 1) {
            k = 1;
            l = 1;
            for (j = 1; j <= i; j++)
            {
                k = k * j;
                l *= i;

            }
            /*  if (mul - (float)k > 0.001)
              {
                  continue;
              }*/

            mul = (float)k;
            // printf("%f", mul);
            res = res + (l / mul);
        }
    }
    printf("%f", res);

    return 0;
}