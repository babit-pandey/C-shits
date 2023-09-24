#include <stdio.h>
#include <stdlib.h>
struct info
{
    char name[20];
    char post[20];
    char department[20];
    int salary;
};
int main()
{
    FILE *file;
    struct info emp;
    int count = 0;
    file = fopen("info.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fread(&emp, sizeof(emp), 1, file))
    {
        printf("%s %s %s %d\n", emp.name, emp.post, emp.department, emp.salary);
        if (emp.salary > 5000)
        {
            count++;
        }
    }
    printf("Total number of records with salary more than 5000: %d\n", count);
    fclose(file);
    return 0;
}