/*
Add a function to the program of Exercise 10.9 that accepts two vectors as input parameters and
retun the addition of two vectors.
*/
#include<stdio.h>

struct vector
{
    int i[10];
}s1, s2;
struct vector sum(struct vector s1, struct vector s2)
{
    struct vector s3;
    for (int p = 0;p < 10;p++) {
        s3.i[p] = s1.i[p] + s2.i[p];
    }
    for (int q = 0;q < 10;q++) {
        printf("%d ", s3.i[q]);
    }
}
int main()
{
    // input1(s1);
    // input2(s2);
    printf("\n------Enteer 1st vector------\n");
    for (int j = 0;j < 10;j++) {
        scanf("%d", &s1.i[j]);
    }
    printf("\n------Enteer 2nd vector------\n");
    for (int k = 0;k < 10;k++) {
        scanf("%d", &s2.i[k]);
    }
    // printf("%d", s2.i[5]);
    // printf("%d", s1.i[7]);
    sum(s1, s2);

    return 0;
}