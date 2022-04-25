/*
Write a program to do the following:
(a) To output the question "who is the inventor of C?
(b) To accept an answer
(c) To print out "Good" and then stop. if the answer is correct.
(d) To outpul the message 'try again, if the answer is wrong.
(e) To display the correct answer when the answer is wrong even at the third attempt and stop
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int l, count = 0;
    printf("who is the invetor of c? :\t");
jemish:
    gets(name);
    l = strcmp(name, "richi");
    if (l == 0)
        printf("Good");
    else
    {
        printf("try again....\n");
        count++;
        if (count > 3)
            printf("lemme  tell you it is RICHI..!!");
        else
            goto jemish;

    }

    return 0;
}