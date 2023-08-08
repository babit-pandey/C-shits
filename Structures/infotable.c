#include <stdio.h>
struct person
{
    char name[20];
    char address[20];
    int phone_number;
};
int main()
{
    struct person emp[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter address: ");
        scanf("%s", emp[i].address);
        printf("Enter phone number: ");
        scanf("%d", &emp[i].phone_number);
    }
    printf("The employee information is: \n");
    printf("Name\tAddress\tPhone Number\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\t%s\t%d\n", emp[i].name, emp[i].address, emp[i].phone_number);
    }
    return 0;
}