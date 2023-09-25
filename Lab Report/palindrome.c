#include <stdio.h>
#include <stdlib.h>
int palin(int n)
{
    int a = n, b = 0;

    while (n > 0)
    {
        b = b * 10 + n % 10;
        n /= 10;
    }
    return a == b;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (palin(n))
    {
        printf("%d is a palindrome.\n", n);
    }
    else
    {
        printf("%d is not a palindrome.\n", n);
    }
    return 0;
}