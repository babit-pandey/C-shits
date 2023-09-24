#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct record
{
    char name[20];
    char address[50];
    char telephone[15];
};
int main()
{
    FILE *file;
    struct record r;
    file = fopen("INFO.INF", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fread(&r, sizeof(r), 1, file))
    {
        if (strcmp(r.address, "Kathmandu") == 0)
        {
            printf("%s %s %s\n", r.name, r.address, r.telephone);
        }
    }
    fclose(file);
    return 0;
}