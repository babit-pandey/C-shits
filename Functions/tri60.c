// to check the triangle if it is equilateral or not
#include <stdio.h>
int tri(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the three angles of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 180)
    {
        if (tri(a, b, c) == 1)
        {
            printf("The triangle is equilateral\n");
        }
        else
        {
            printf("The triangle is not equilateral\n");
        }
    }
    else
    {
        printf("The given angles are not a of a triangle.");
    }

    return 0;
}

int tri(int a, int b, int c)
{
    if (a == b && b == c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}