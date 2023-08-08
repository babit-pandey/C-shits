// to calculate the area and circumference of circle
#include <stdio.h>
#define pi 3.14
float area_cir();
int main()
{
    area_cir();
    return 0;
}
float area_cir()
{
    float r, a, c;
    printf("Enter radius:");
    scanf("%f", &r);
    a = pi * r * r;
    c = 2 * pi * r;
    printf(" The area of the circle is %.2f. ", a);
    printf(" The circumference of the circle is %.2f. ", c);
}
