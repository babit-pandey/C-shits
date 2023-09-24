#include <stdio.h>
#include <stdlib.h>
struct info
{
    char name[20];
    int id;
    float salary;
};
int main()
{
    FILE *file;
    struct info emp;
    file = fopen("sal.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fread(&emp, sizeof(emp), 1, file) == 1)
    {
        if (emp.salary > 5000)
        {
            printf("%s %d %.2f\n", emp.name, emp.id, emp.salary);
            emp.salary += emp.salary * 0.2;
        }
    }
    fclose(file);
    return 0;
}