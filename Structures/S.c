#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char address[100];
};

int main() {
    struct Student s[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the roll, name, and address of student %d:\n", i + 1);
        scanf("%d %s %s", &s[i].roll, s[i].name, s[i].address);
    }
    printf("\nRecords of students whose first name begins with the letter 'S':\n");

    for (i = 0; i < n; i++) {
        if (s[i].name[0] == 'S' || s[i].name[0] == 's') {
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Address: %s\n", s[i].address);
            printf("\n");
        }
    }

    return 0;
}
