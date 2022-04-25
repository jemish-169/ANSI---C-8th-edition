/*
Develop a modular interactive program using functions that reads the values of three sides of a
tnangle and displays erther its area or its pernimeler as per the request of the user. Given the three
SIides a, b and c.
Perimeter =a b+
Area(s-a) (s-b) (s-c)
S (a +b+cy2
where
*/
#include<stdio.h>
#include<math.h>
void area(float x, float y, float z)
{
    float area, s = (x + y + z) / 2;
    printf("perimeter is = %f\n", x + y + z);
    area = (s - x) * (s - y) * (s - z);
    printf("Area is = %f", sqrt(area));

}
int main()
{
    float  a, b, c;
    printf("Enter value of a,b,c : \n");
    scanf("%f%f%f", &a, &b, &c);
    area(a, b, c);
    return 0;
}