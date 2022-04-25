/*
Shown below is a Floyd's triangle.
*/
#include <stdio.h>
int main()
{
    int n = 1, i, line = 1;
    while (n <= 91)
    {
        //printf("%d",&n);

        for (i = 1; i <= line && n <= 91; i++)
        {
            printf("%d ", n % 2); //print n for 1,2,3,4.... and n%2 for print 0,1,0,1...
            n++;
        }
        line++;
        printf("\n");
    }

    return 0;
}