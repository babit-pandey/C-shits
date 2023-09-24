#include <stdio.h>

struct student
{
    char name[50];
    int class;
    int marks[3];
    int total;
};

int main()
{
    FILE *file;
    struct student s;
    char choice;
    file = fopen("RESULT.DAT", "w");

    while (1)
    {
        printf("Enter Student name: ");
        scanf("%s", s.name);
        printf("Enter class: ");
        scanf("%d", &s.class);
        printf("Enter marks in three subjects: ");
        scanf("%d %d %d", &s.marks[0], &s.marks[1], &s.marks[2]);
        s.total = s.marks[0] + s.marks[1] + s.marks[2];
        fwrite(&s, sizeof(s), 1, file);
        printf("Do you want to enter another record (Y/N)? ");
        scanf(" %c", &choice);
        if (choice != 'Y' && choice != 'y')
        {
            break;
        }
    }
    fclose(file);
    return 0;
}
