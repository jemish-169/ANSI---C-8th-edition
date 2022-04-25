/*
For a certain electrical circuit with an inductance L and resistance R the damped natural
frequency is given by
Frequency
t is desired to study the variation o this frequency with C (capactance). Write a program to
calculate the frequency for different values of C starting from 0.01 to 0.1 in steps of 0.01.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float rfreq, freq, cap, res, l;
    printf("enter  resistance and induction : ");
    scanf("%f%f", &res, &l);
    for (cap = 0.01; cap <= 0.1; cap += 0.01)
    {
        rfreq = (1 / cap * l) - (res * res / 4 * cap * cap);
        freq = sqrt(rfreq);
        printf("frequency is %f\n", freq);
    }
    return 0;
}