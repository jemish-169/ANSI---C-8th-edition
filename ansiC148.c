//Two files DATA1 and DATA2 contain sorted lists of integers/ Write a program to produce a third file DATA which holds a single sorted, merged list of these two lists. Use command line arguments to specify the file names.
#include<stdio.h>
void sort(FILE*, FILE*, FILE*);

int main()
{
    FILE* f1, * f2, * f;
    int i;

    f1 = fopen("DATA1", "w");    //To set the sorted integers in file f1
    for (i = 0;i <= 10; i = i + 2)
        putw(i, f1);
    fclose(f1);

    f2 = fopen("DATA2", "w");    //To set the sorted integers in file f2
    for (i = 1;i <= 11; i = i + 2)
        putw(i, f2);
    fclose(f2);

    printf("For first DATA:\n");    //To print the content of f1
    f1 = fopen("DATA1", "r");
    while ((i = getw(f1)) != EOF)
        printf("%d, ", i);
    fclose(f1);

    printf("\nFor second DATA:\n");    //To print the content of file f2
    f2 = fopen("DATA2", "r");
    while ((i = getw(f2)) != EOF)
        printf("%d, ", i);
    fclose(f2);

    sort(f1, f2, f);    //To sort the integers from f1 and f2 and merge the sorted into file f

    f = fopen("DATA", "r");
    //To print the integers in file f
    printf("\nAnswer is :\n");
    while ((i = getw(f)) != EOF)
        printf("%d, ", i);
    fclose(f);
}

void sort(FILE* d1, FILE* d2, FILE* d)
{
    int a, b;
    d1 = fopen("DATA1", "r");
    d2 = fopen("DATA2", "r");
    d = fopen("DATA", "w");
    a = getw(d1);
    b = getw(d2);
    for (int i = 0;i < 12;i++)
    {
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
            b = getw(d2);
            putw(a, d);
            b = getw(d2);
        }
        else
        {
            putw(a, d);
            a = getw(d1);
        }
    }
    fclose(d1);
    fclose(d2);
    fclose(d);
}