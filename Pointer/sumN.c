#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int *p = arr;
    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }
    printf("Sum of the %d numbers is: %d\n", n, sum);

    return 0;
}
