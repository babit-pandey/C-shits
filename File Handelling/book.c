#include <stdio.h>
#include <stdlib.h>

int main()
{
    char book_title[50], author_name[50];
    int edition_date, price, copies;
    char choice;
    FILE *fp;

    fp = fopen("book.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return EXIT_FAILURE;
    }

    while (1)
    {
        printf("Enter the Book's Title: ");
        scanf("%s", book_title);

        printf("Enter the Author's name: ");
        scanf("%s", author_name);

        printf("Enter the Edition date (YYYY): ");
        scanf("%d", &edition_date);

        printf("Enter the price: ");
        scanf("%d", &price);

        printf("Enter the copies: ");
        scanf("%d", &copies);

        fprintf(fp, "%s\n", book_title);
        fprintf(fp, "%s\n", author_name);
        fprintf(fp, "%d\n", edition_date);
        fprintf(fp, "%d\n", price);
        fprintf(fp, "%d\n", copies);

        printf("Do you want to add more records? (Y/N): ");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y')
        {
            break;
        }
    }

    fclose(fp);

    return 0;
}
