#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int marks[3];
    int total;
};
int main()
{
    FILE *file;
    struct student s;
    int count = 0;
    file = fopen("RESULT.DAT", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fread(&s, sizeof(s), 1, file))
    {
        s.total = s.marks[0] + s.marks[1] + s.marks[2];
        float percentage = (s.total / 300.0) * 100;
        if (percentage > 60 && percentage < 80)
        {
            printf("%s %d %d %d %d %.2f\n", s.name, s.marks[0], s.marks[1], s.marks[2], s.total, percentage);
            count++;
        }
    }
    printf("Total number of records: %d\n", count);
    fclose(file);
    return 0;
}