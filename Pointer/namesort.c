#include <stdio.h>
#include <string.h>

struct S {
    int r;
    char n[20];
    int a;
};

void sSort(struct S a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int m = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(a[j].n, a[m].n) < 0) {
                m = j;
            }
        }
        if (m != i) {
            struct S t = a[i];
            a[i] = a[m];
            a[m] = t;
        }
    }
}

int main() {
    struct S s[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter roll of student %d: ", i + 1);
        scanf("%d", &s[i].r);

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].n);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].a);
    }

    sSort(s, 10);

    printf("\nSorted Student Records by Name (Alphabetical Order):\n");
    printf("Roll\tName\t\tAge\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t\t%d\n", s[i].r, s[i].n, s[i].a);
    }

    return 0;
}
