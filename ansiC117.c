/*
Develop a top-down modular program that will perform the following tasks:
(a) Read two integer arrays ith unsorted elements.
(6) Sort them in ascending order
Merge the sorted arrays
(a) Print the sorled list
Use functions for carrying out each of the above tasks. The main function should have only
unction ce
*/
#include<stdio.h>
void sort(int z, int x[])
{
    int j;
    for (int i = 0; i < z; i++)
    {
        for (j = 0; j < z; j++)
        {
            if (x[i] < x[j])
            {
                x[i] = x[i] + x[j];
                x[j] = x[i] - x[j];
                x[i] = x[i] - x[j];

            }
        }

    }
    printf("\n----- sorted array -----\n");
    for (int i = 0; i < z; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");


}
void merge(int z, int x[], int y[])
{
    int size = 2 * z, j = 0;
    int m[size];
    for (int i = 0; i < z; i++)
    {
        m[i] = x[i];
    }

    for (int i = z; i < size; i++)
    {
        m[i] = y[j];
        j++;
        //printf("%d", i);
    }

    printf("\n----- merged array -----\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
    sort(size, m);

};
int main()
{
    int p;
    printf("Enter order of matrix : ");
    scanf("%d", &p);
    int a[p], b[p];
    printf("Enter array 1 : \n");
    for (int i = 0;i < p;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter array 2 : \n");
    for (int i = 0;i < p;i++)
    {
        scanf("%d", &b[i]);
    }
    sort(p, a);
    sort(p, b);
    merge(p, a, b);
    return 0;
}