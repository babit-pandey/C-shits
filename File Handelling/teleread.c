#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("Tele.dat", "r");

    char first_name[20], last_name[20], address[50], telephone[15];
    char search_name[20];

    printf("Enter first name or last name to search: ");
    scanf("%s", search_name);

    while (fscanf(fp, "%s %s %s %s\n", first_name, last_name, address, telephone) != EOF)
    {
        if (strcmp(first_name, search_name) == 0 || strcmp(last_name, search_name) == 0)
        {
            printf("First name: %s\n", first_name);
            printf("Last name: %s\n", last_name);
            printf("Address: %s\n", address);
            printf("Telephone: %s\n", telephone);
            break;
        }
    }

    fclose(fp);
    return 0;
}
