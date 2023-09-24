#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("Tele.dat", "r");

    char first_name[20], last_name[20], address[50], telephone[15];
    char delete_name[20];

    printf("Enter first name or last name to delete: ");
    scanf("%s", delete_name);

    FILE *temp_fp = fopen("temp.dat", "w");

    while (fscanf(fp, "%s %s %s %s\n", first_name, last_name, address, telephone) != EOF)
    {
        if (strcmp(first_name, delete_name) == 0 || strcmp(last_name, delete_name) == 0)
        {
            continue;
        }
        fprintf(temp_fp, "%s %s %s %s\n", first_name, last_name, address, telephone);
    }

    fclose(fp);
    fclose(temp_fp);

    remove("Tele.dat");
    rename("temp.dat", "Tele.dat");

    return 0;
}
