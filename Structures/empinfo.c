#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    char department[20];
    int salary;
};
int main()
{
    struct employee emp[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter department: ");
        scanf("%s", emp[i].department);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }
    printf("Enter the name of an employee: ");
    char name[20];
    scanf("%s", name);
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(emp[i].name, name) == 0)
        {
            printf("Name:%s\n", emp[i].name);
            printf("Department:%s\n", emp[i].department);
            printf("Salary:%d\n", emp[i].salary);
        }
    }
    return 0;
}