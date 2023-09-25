#include <stdio.h>

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int lcm(int a, int b)
{
    int h = hcf(a, b);
    return (a * b) / h;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int h = hcf(a, b);
    int l = lcm(a, b);

    printf("HCF of %d and %d is %d\n", a, b, h);
    printf("LCM of %d and %d is %d\n", a, b, l);

    return 0;
}
