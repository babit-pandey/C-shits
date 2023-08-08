// to check the numbers whether they are positive or not
#include <stdio.h>
void P_N(int num1, int num2, int *result);
int main()
{
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    P_N(num1, num2, &result);
    if (result == 1)
    {
        printf("Both numbers are positive\n");
    }
    else
    {
        printf("One or both numbers are negative\n");
    }
    return 0;
}

void P_N(int num1, int num2, int *result)
{
    if (num1 >= 0 && num2 >= 0)
    {
        *result = 1;
    }
    else
    {
        *result = 0;
    }
}