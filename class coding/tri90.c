// to check the triangle if it is right angled or not
#include <stdio.h>
int tri(int x, int y, int z);
int main()
{
    int x, y, z;
    printf("Enter the three angles of a triangle: ");
    scanf("%d%d%d", &x, &y, &z);
    if (x + y + z == 180)
    {
        if (tri(x, y, z) == 1)
        {
            printf("The triangle is a right angled triangle\n");
        }
        else
        {
            printf("The triangle is not a right angled triangle\n");
        }
    }
    else
    {
        printf("The given angles are not a of a triangle.");
    }

    return 0;
}
int tri(int x, int y, int z)
{
    if (x == 90 || y == 90 || z == 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}