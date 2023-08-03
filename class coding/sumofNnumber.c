// to find sum of first n natural number
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number upto which you want the sum: ");
    scanf("%d", &n);
    printf(" The sum of the first %d natural numbers is %d. ", n, sum(n));
    return 0;
}
int sum(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}