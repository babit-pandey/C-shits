#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_number;
    char name[20];
    int age;
};

int main() {
    
    struct student student[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &student[i].roll_number);
        
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &student[i].age);
       
    }


    for (int i = 0; i < 9; i++) {
    
            if (student[i].age > student[i +1].age) {
                struct student temp = student[i];
                student[i] = student[i +1];
                student[i +1] = temp;
            
        }
    }

    printf("\nSorted Student Records by Age (Ascending Order):\n");
    printf("S/N\tRoll Number\tName\t\tAge\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t\t%s\t\t%d\n", i+1, student[i].roll_number, student[i].name, student[i].age);
    }

    return 0;
}
