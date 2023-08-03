// to calculate the volume of cube
#include <stdio.h>
void vol();
int main()
{
    vol();
    return 0;
}
void vol()
{
    int l, vol;
    printf("Enter length:");
    scanf("%d", &l);
    vol = l * l * l;
    printf("\nVolume is %d", vol);
}
