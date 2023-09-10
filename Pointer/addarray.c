#include <stdio.h>

void add(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        a[i] += b[i];
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements for array 'a':\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for array 'b':\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    add(a, b, n);

    printf("Resultant array 'a' after addition:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
