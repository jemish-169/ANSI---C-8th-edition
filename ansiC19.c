/*
In inventory management, the Economic Order Quantity for a single tem is given by
second), a is the acceleration (metres per second ")
EOQ 4x Oemand rate x setup costs
EOOholding cost per tem per unt Be
and the optimal Time Between Orders
seup costs
Ydemand rate x hokding cost per unt ime
Write a program to compute EO0 and TBO. gven demand rate (tems per unit time). setup costs
rBO
perr order). and the holding cost (per item per unit time)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float EOQ, TBO, reoq, rtbo;
    float dmr, stc, hdc;
    printf("enter holding cost : \nenter demand rate : \nenter starting cost : \n");
    scanf("%f%f%f", &hdc, &dmr, &stc);
    reoq = (2 * dmr * stc) / hdc;
    rtbo = (2 * stc) / (dmr * hdc);

    EOQ = sqrt(reoq);
    TBO = sqrt(rtbo);
    printf("EOQ is %f\nTBO is %f", EOQ, TBO);

    return 0;
}