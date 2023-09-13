#include <stdio.h>

struct person {
    char name[20];
    char address[50];
    int age;
};

int main() {
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    struct person p[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", p[i].name);
        printf("Enter the address of person %d: ", i + 1);
        scanf("%s", p[i].address);
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &p[i].age);
    }

    printf("\nThe following persons are eligible to cast a vote:\n");
    for (int i = 0; i < n; i++) {
        if (p[i].age >= 18) {
            printf("%s\n", p[i].name);
        }
    }

    return 0;
}
