#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct info
{
    char name[20];
    char post[20];
    float salary;
};

int main()
{
    FILE *file;
    struct info emp[100];
    int num = 0;

    file = fopen("ADDRESS.INF", "r+");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fread(&emp[num], sizeof(emp), 1, file) && num < 100)
    {
        num++;
    }

    for (int i = 0; i < num; i++)
    {
        emp[i].salary += emp[i].salary * 0.25;
    }

    rewind(file);
    fwrite(emp, sizeof(emp), num, file);

    fclose(file);

    return 0;
}
