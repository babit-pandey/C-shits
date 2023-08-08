#include <stdio.h>

struct book
{
    char title[20];
    char author[20];
};

struct book read()
{
    struct book b;
    printf("\nEnter the Title: ");
    scanf("%s", &b.title);
    printf("\nEnter Author Name: ");
    scanf("%s", &b.author);
    return b;
}

void write(struct book b)
{
    printf("\nTitle: %s", b.title);
    printf("\nAuthor name: %s", b.author);
}

int main()
{
    struct book b = read();
    write(b);
    return 0;
}

/* #include <stdio.h>
struct book
{
    char title[50];
    char author[50];
};

struct book read(int num)
{
    struct book book;
    printf("Enter the details for Book %d:\n\n", num);
    printf("Enter the title of the book: ");
    scanf("%s", book.title);
    printf("Enter the author of the book: ");
    scanf("%s", book.author);
    return book;
}

void write(struct book book, int num)
{
    printf("Details for Book %d:\n\n", num);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
}

int main()
{
    struct book books[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        books[i] = read(i + 1);
    }

    for (i = 0; i < 10; i++)
    {
        write(books[i], i + 1);
    }

    return 0;
}
*/