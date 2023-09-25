#include <stdio.h>

struct Employee
{

    char name[50];
    float salary;
};

int main()
{
    FILE *file;

    struct Employee emp[100];

    file = fopen("sal.dat", "r+");

    int count = 0;

    while (fread(&emp[count], sizeof(struct Employee), 1, file) == 1)
    {
        count++;
    }

    rewind(file);

    for (int i = 0; i < count; i++)
    {
        if (emp[i].salary > 5000)
        {
            emp[i].salary *= 1.20;
        }
        fwrite(&emp[i], sizeof(struct Employee), 1, file);
    }

    for (int i = 0; i < count; i++)
    {

        printf("Employee Name: %s\n", emp[i].name);
        printf("Updated Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }

    fclose(file);

    return 0;
}
