#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("Tele.dat", "w");

    char first_name[20], last_name[20], address[50], telephone[15];
    printf("Enter first name: ");
    scanf("%s", first_name);
    printf("Enter last name: ");
    scanf("%s", last_name);
    printf("Enter address: ");
    scanf("%s", address);
    printf("Enter telephone: ");
    scanf("%s", telephone);

    fprintf(fp, "%s %s %s %s\n", first_name, last_name, address, telephone);
    fclose(fp);

    return 0;
}
