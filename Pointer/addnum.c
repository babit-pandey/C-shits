#include <stdio.h>

void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, res;

    printf("Enter two numbers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    add(&num1, &num2, &res);

    printf("Sum of %d and %d is %d\n", num1, num2, res);

    return 0;
}
