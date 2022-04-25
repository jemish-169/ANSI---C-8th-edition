/*
An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the voting is
done by marking the candidate number on the ballot paper. Wnte a program to read the ballols
and count the votes cast for each candidate using an array variable count in case, a number
read is outside the range 1 to 5, the ballot should be considered as a 'spoilt ballot' and the
program should also count the rumber of spoit ballots.
*/
#include <stdio.h>
void main()
{
    int group[5] = { 0,0,0,0,0 }, i, value[100];
    int spoilt = 0;

    printf("To Vote Rajesh press 1\nTo vote Ravi press 2\n\
To vote sunil press 3\nTo vote sameer press 4\nTo vote \
Raj press 5\nTo exit voting press 0\n\n");
    for (i = 1;i <= 10;i++)
    {
        scanf("%d", &value[i]);
        ++group[value[i]];
        if (value[i] > 5)
            spoilt++;
        else if (value[i] == 0)
            break;
    }
    printf("Rajesh got %d votes\n", group[1]);
    printf("Ravi got %d votes\n", group[2]);
    printf("Sunil got %d votes\n", group[3]);
    printf("Sameer got %d votes\n", group[4]);
    printf("Raj got %d votes\n", group[5]);
    printf("%d votes has been spoilt", spoilt);

}