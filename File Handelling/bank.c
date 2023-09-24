#include <stdio.h>
#include <stdlib.h>

struct r
{
    char name[50];
    int id;
    char address[100];
    char contact[15];
};

int main()
{
    FILE *file;
    struct r r;

    file = fopen("bank.dat", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fread(&r, sizeof(r), 1, file) == 1)
    {
        printf("Name: %s\n", r.name);
        printf("ID number: %d\n", r.id);
        printf("Address: %s\n", r.address);
        printf("Contact number: %s\n", r.contact);
        printf("\n");
    }

    fclose(file);

    return 0;
}
