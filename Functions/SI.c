// to calculate intrest using user defined function
#include <stdio.h>
void SI();
int main()
{
    SI();
    return 0;
}
void SI()
{
    float p, r, t, si;
    printf("Enter principal, rate and time respectively: ");
    scanf("%f%f%f", &p, &r, &t);
    si = (p * t * r) / 100;
    printf("\nSimple Interest = %.2f", si);
}
