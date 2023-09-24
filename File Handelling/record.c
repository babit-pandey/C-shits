#include <stdio.h>

int main()
{
    FILE *fp = fopen("record.dat", "w");

    char name[50];
    int id;
    char address[100];
    char contact[15];

    printf("Enter the name: ");
    scanf("%s", &name);
    printf("Enter the ID number: ");
    scanf("%d", &id);
    printf("Enter the address: ");
    scanf("%s", &address);
    printf("Enter the contact number: ");
    scanf("%s", &contact);

    fprintf(fp, "%s\n", name);
    fprintf(fp, "%d\n", id);
    fprintf(fp, "%s\n", address);
    fprintf(fp, "%s\n", contact);

    fclose(fp);

    return 0;
}
