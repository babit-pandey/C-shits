#include <stdio.h>

struct student
{
    char name[20];
    int roll;
};

struct student read()
{
    struct student s;
    printf("\nEnter the Student's Name: ");
    scanf("%s", s.name);
    printf("\nEnter Roll Number: ");
    scanf("%d", &s.roll);
    return s;
}

void write(struct student s)
{
    printf("\nStudent's Name: %s", s.name);
    printf("\nRoll Number: %d", s.roll);
}

int main()
{
    struct student s = read();
    write(s);
    return 0;
}
