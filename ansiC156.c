/*
Rewrite the program developed in Exercise 12.8 to store the details in a random access file and
print the details of alternate products from the file. Modify the program so that it can output the
details of a product when ts code is specihed interactively.
*/
#include <stdio.h>

void main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[20];
        int price;
        int code;
        int qty;
        struct date mfg;
    };
    struct details item[50];
    int n, i;

    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Item name: \n");
        scanf("%s", item[i].name);

        fflush(stdin);
        printf("Item code: \n");
        scanf("%d", &item[i].code);

        fflush(stdin);
        printf("Quantity: \n");
        scanf("%d", &item[i].qty);

        fflush(stdin);
        printf("price: \n");
        scanf("%d", &item[i].price);
        fflush(stdin);
        printf("Manufacturing date(dd-mm-yyyy): \n");
        scanf("%d-%d-%d", &item[i].mfg.day,
            &item[i].mfg.month, &item[i].mfg.year);
    }
jemishbhai:
    printf("             *****  INVENTORY ***** \n");
    printf("--------------------------------------------------------- ---------\n");
    printf("S.N.|    NAME   |   CODE   |  QUANTITY |  PRICE | MFG.DATE \n");
    printf("----------------------------------------------------------------- - \n");
    for (i = 0; i < n; i++)
        printf("%d \t%-15s\t%-d\t%-5d\t%-5d\t%d/%d/%d\n", i + 1, item[i].name, item[i].code, item[i].qty,
            item[i].price, item[i].mfg.day, item[i].mfg.month,
            item[i].mfg.year);
    printf("----------------------------------------------------------------\n");
    float sum = 0.0;
    int l;
    for (int j = 0;j < n;j++)
    {
        item[j].price *= item[j].qty;
        sum += item[j].price;
    }
    printf("sum is %.3f", sum);
    printf("\nIF YOU WANT TO CHANGE DATA OF ANY PERTICULAR ROW PRESS ROW NUMBER :");
    scanf("%d", &l);
    if (l >= 0 && l <= n)
    {
        l--;
        printf("-------Enter data of row %d-------\n", l);
        fflush(stdin);
        printf("Item name: \n");
        scanf("%s", item[l].name);
        fflush(stdin);
        printf("Item code: \n");
        scanf("%d", &item[l].code);
        fflush(stdin);
        printf("Quantity: \n");
        scanf("%d", &item[l].qty);
        fflush(stdin);
        printf("price: \n");
        scanf("%d", &item[l].price);
        fflush(stdin);
        printf("Manufacturing date(dd-mm-yyyy): \n");
        scanf("%d-%d-%d", &item[l].mfg.day,
            &item[l].mfg.month, &item[l].mfg.year);
        goto jemishbhai;
    }
}