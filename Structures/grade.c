#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    char grade;
};

void read(struct student *s)
{
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void grades(struct student *s)
{
    if (s->marks >= 90)
        s->grade = 'A';
    else if (s->marks >= 80)
        s->grade = 'B';
    else if (s->marks >= 70)
        s->grade = 'C';
    else if (s->marks >= 60)
        s->grade = 'D';
    else if (s->marks >= 50)
        s->grade = 'E';
    else
        s->grade = 'F';
}

void display(struct student s)
{
    printf("\nStudent Name: %s", s.name);
    printf("\nRoll Number: %d", s.roll);
    printf("\nMarks: %.2f", s.marks);
    printf("\nGrade: %c", s.grade);
}

int main()
{
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        read(&students[i]);
        grades(&students[i]);
    }

    printf("\nStudent Grades:\n");
    for (i = 0; i < n; i++)
    {
        display(students[i]);
        printf("\n");
    }

    return 0;
}
