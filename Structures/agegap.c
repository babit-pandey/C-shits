#include <stdio.h>
struct student {
    char name[20];
    int age;
};
int main() {
    struct student s[100];
    int count = 0;
    for (int i = 0; i < 100; i++) {
        printf("Enter the name of the student: ");
        scanf("%s", s[i].name);
        printf("Enter the age of the student: ");
        scanf("%d", &s[i].age);
        if (s[i].age >= 15 && s[i].age <= 20) {
            count++;
        }
    }
    printf("The number of students in the age group between 15 and 20 is: %d\n", count);
    
        printf("List of students in the age group between 15 and 20:\n");
        printf("Name\tAge\n");
        for (int i = 0; i < 100; i++) {
            if (s[i].age >= 15 && s[i].age <= 20) {
                printf("%s\t%d\n", s[i].name, s[i].age);
            }
        }
    return 0;
}