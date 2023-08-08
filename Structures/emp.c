#include <stdio.h>
struct employee
{
    char name[20];
    char address[20];
    int salary;
};
int main()
{
    struct employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter address: ");
        scanf("%s", emp[i].address);
        printf("Enter salary: ");
        scanf("%d", &emp[i].salary);
    }
    printf("The employee information is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name:%s\n", emp[i].name);
        printf("Address:%s\n", emp[i].address);
        printf("Salary:%d\n", emp[i].salary);
    }
    return 0;
}