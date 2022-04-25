/*Write a program to create a directory of students with roll numbers. The program should display
the roll number for a specified name and vice-versa.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, a[n];
    char b[n][100];
    for (i = 0;i < n;i++)
    {
        scanf("%d%s", &a[i], b[i]);
    }
    int k;
    scanf("%d", &k);
    for (i = 0;i < n;i++)
    {
        if (a[i] == k)
        {
            k = i;break;
        }
    }
    printf("Name=%s\nregno=%d", b[k], a[k]);

    return 0;
}