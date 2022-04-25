/*
Create two structures named metric and British which store the values of dislances. The metric
structure stores the values in metres and centimetres and the Brntish structure slores the values
in feet and inches. Write a program that reads values for the structure variables and adds values
contained in one variable of metric to the contents of another vaniable of British. The program
should display the result in the format of feet and inches or metres and centimetres as required.
*/
#include <stdio.h>
// #include <conio.h>
struct metric
{
    int metre;
    int centimetre;
};
struct british
{
    int feet;
    int inches;
};
void main()
{
    int inch, CM, centimetre;
    struct metric met;
    struct british bri;
    // clrscr();
    printf("Enter distance in metre and centimetre m cm : ");
    scanf("%d %d", &met.metre, &met.centimetre);
    printf("Enter the distance in feet and inches f in : ");
    scanf("%d %d", &bri.feet, &bri.inches);
    inch = bri.inches + bri.feet * 12;
    centimetre = met.centimetre + met.metre * 100;
    CM = inch * 2.54;
    met.metre = 0;
    met.metre = (CM + centimetre) / 100;
    met.centimetre = 0;
    met.centimetre = (CM + centimetre) % 100;
    printf("Addition of these distance: %d metre and %d centimetre", met.metre, met.centimetre);
    // getch();
}