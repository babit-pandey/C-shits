// convert fareheit temperature to celcius
#include <stdio.h>
float FahrToCel(float f);
int main()
{
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    float celcius = FahrToCel(f);
    printf("Temperature in Celcius: %.2f", celcius);
    return 0;
}
float FahrToCel(float f)
{
    float cel = (f - 32) * 5 / 9;
    return cel;
}
