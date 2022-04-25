/*
Develop a program to implement the binary search algorithm. This technique compares the
search key value with the value of the elemen that is midway in a "sorted" ist. Then;
(a) ir they match, the search is over.
(b) If the search key value is less than the middle value, then the first half of the list contains the
Key value.
(c) If the search key value is greater than the middle value, then the second half contains the
Key value.
Repeat this "divide-and-conquer strategy until we have a match. If the list is reduced to one non
malching element, then the list does nol conlain the key value.
*/
#include<stdio.h>
int main()
{
    int a[9], beg = 1, end = 9, mid, item;
    printf("enter sorted 7 values : \n");
    for (int i = 1; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter a value you want to find : \n");
    scanf("%d", &item);
    for (int i = 1;i < 8;i++)
    {
        mid = (beg + end) / 2;
        if (item < a[mid])
            end = mid;
        else if (item > a[mid])
            beg = mid;
        else
        {
            printf("found at %d", mid);
            break;
        }

    }


    return 0;
}