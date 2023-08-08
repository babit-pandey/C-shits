// to check the number whether it is odd or even
#include <stdio.h>
char odd_even(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is %c\n", odd_even(num));
    return 0;
}

char odd_even(int num)
{
    if (num % 2 == 0)
    {
        return 'E';
    }
    else
    {
        return 'O';
    }
}