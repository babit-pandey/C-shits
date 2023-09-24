#include <stdio.h>

int main()
{
    FILE *file = fopen("student.dat", "w");

    char name[50], address[100], dob[12];
    int roll;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter student's roll number: ");
    scanf("%d", &roll);

    printf("Enter student's address: ");
    scanf("%s", address);

    printf("Enter student's date of birth (DD/MM/YYYY): ");
    scanf("%s", dob);

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Roll Number: %d\n", roll);
    fprintf(file, "Address: %s\n", address);
    fprintf(file, "Date of Birth: %s\n", dob);

    fclose(file);

    printf("Student information has been saved in 'student.dat'.\n");

    return 0;
}
