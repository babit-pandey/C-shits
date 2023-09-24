#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int marks[3];
} s;
int main()
{
    FILE *file;
    struct student s;
    int count = 0;
    file = fopen("result.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fread(&s, sizeof(s), 1, file))
    {
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += s.marks[i];
        }
        if (total >= 96)
        {
            count++;
        }
    }
    printf("Number of passed student: %d\n", count);
    fclose(file);
    return 0;
}