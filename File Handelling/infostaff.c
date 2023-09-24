#include <stdio.h>

int main()
{
    char name[50], location[50], contact[15];
    int num;

    printf("Enter the name of the school: ");
    scanf("%s", name);

    printf("Enter the location of the school: ");
    scanf("%s", location);

    printf("Enter the contact number of the school: ");
    scanf("%s", contact);

    printf("Enter the number of staff in the school: ");
    scanf("%d", &num);

    FILE *file = fopen("info.dat", "w");

    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Location: %s\n", location);
    fprintf(file, "Contact Number: %s\n", contact);
    fprintf(file, "Number of Staff: %d\n", num);

    fclose(file);

    printf("School information has been saved in 'info.dat'.\n");

    return 0;
}
