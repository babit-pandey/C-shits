// to get the middile number
#include <stdio.h>
int middle(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int mid = middle(a, b, c);
    printf("The middle number is: %d\n", mid);
    return 0;
}

int middle(int a, int b, int c)
{
    if (a > b && a < c)
    {
        return a;
    }
    else if (b > a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}