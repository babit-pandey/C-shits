#include <stdio.h>
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The fact of %d is %d.\n", n, fact(n));
    return 0;
}