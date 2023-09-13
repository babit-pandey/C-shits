#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char district[50];
    char phone[20];
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("District: ");
        scanf("%s", s[i].district);
        printf("Phone Number: ");
        scanf("%s", s[i].phone);
    }

    printf("\nStudent Details from 'Chitwan' District:\n");
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].district, "Chitwan") == 0) {
            printf("Name: %s\n", s[i].name);
            printf("District: %s\n", s[i].district);
            printf("Phone Number: %s\n", s[i].phone);
        }
    }

    return 0;
}
