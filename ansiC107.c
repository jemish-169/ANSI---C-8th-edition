/*
An n_order polynomial can be evaluated as follows:
P ((a,x*a, )x*a,)x*a, )x*.*+a,)
Wnte a function to evaluale the polynomia, using an aray variable. Test it using a main program.
*/
#include<stdio.h>
#include<math.h>
#define max 8
int x, a[max], num = 8, z;
int calculate(int i, int y)
{
    if (i == 0)
        return a[0];
    else {
        // printf("hy%d", i);
        return a[i] + x * calculate(--i, y);
    }
};
int main()
{
    int num = max;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of a[0] to a[7]: ");
    for (int i = 0;i < max;i++) {
        scanf("%d", &a[i]);
    }
    z = calculate(num, x);

    printf("%d\n", z);
    return 0;
}
