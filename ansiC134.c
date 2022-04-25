/*
Define a structure named census with the following three members:
A character array city [ ] to store names
A
long intleger to store population of the city
A float member to store the literacy level
Write a program to do the following:
To read delails for 3 cities randomly using an array variable
To sort the list alphabetically
To sort the list based on iteracy leve
To sort the list based on population
To display sorted lists
*/#include <stdio.h>
struct census
{
    char city[50];
    long int population;
    float li;
};

int main()
{
    struct census temp, c[5];
    int i, p, j;
    for (i = 0;i < 5;i++)
    {
        printf("enter city name, population and literacy level : ");
        scanf("%s%ld%f", &c[i].city, &c[i].population, &c[i].li);
    }
    for (p = 0;p < 4;p++)
    {
        for (j = 0;j < 5 - p - 1;j++)
        {
            if (c[j].li > c[j + 1].li)
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\nsorted order for literacy : \n");
    for (i = 0;i < 5;i++)
    {
        printf("%s\t%ld\t%f\n", c[i].city, c[i].population, c[i].li);
    }

    for (p = 0;p < 4;p++)
    {
        for (j = 0;j < 5 - p - 1;j++)
        {
            if (c[j].population > c[j + 1].population)
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\nsorted order for population : \n");
    for (i = 0;i < 5;i++)
    {
        printf("%s\t%ld\t%f\n", c[i].city, c[i].population, c[i].li);
    }

    for (p = 0;p < 4;p++)
    {
        for (j = 0;j < 5 - p - 1;j++)
        {
            if (c[j].city[1] > c[j + 1].city[1])
            {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
            if (c[j].city[1] == c[j + 1].city[1])
            {
                if (c[j].city[2] > c[j + 1].city[2])
                {
                    temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }

        }
    }
    printf("\nsorted order for name : \n");
    for (i = 0;i < 5;i++)
    {
        printf("%s\t%ld\t%f\n", c[i].city, c[i].population, c[i].li);
    }
    return 0;
}