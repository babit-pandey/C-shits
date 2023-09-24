#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int marks[3];
};

int main()
{
    FILE *file;
    struct student s;
    int count = 0;
    float average;

    file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fread(&s, sizeof(s), 1, file) == 1)
    {
        average = (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
        if (average > 70)
        {
            count++;
        }
    }

    fclose(file);

    printf("Number of Students who have secured more than 70%%: %d\n", count);

    return 0;
}
