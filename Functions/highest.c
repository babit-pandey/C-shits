// to find the highest number
#include <stdio.h>
int highest(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("The highest number is: %d\n", highest(num1, num2, num3));
    return 0;
}

int highest(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}