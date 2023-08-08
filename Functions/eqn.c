// to check the eqn is satisfised or not
#include <stdio.h>
int find(int a, int b, int c, int d)
{
    if ((a ^ 3 + b ^ 3 + c ^ 3) == (d ^ 3))
    {
        return 100;
    }
    else
    {
        return 200;
    }
}
int main()
{
    int a, b, c, d, result;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    result = find(a, b, c, d);
    if (result == 100)
    {
        printf("The equation a^3 + b^3 + c^3 = d^3 is satisfied\n");
    }
    else
    {
        printf("The equation a^3 + b^3 + c^3 = d^3 is not satisfied\n");
    }
    return 0;
}