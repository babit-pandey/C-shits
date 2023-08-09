#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    char address[50];
};

int main()
{
    struct student S[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf(" %d", &S[i].roll);

        printf("Enter the name of student %d: ", i + 1);
        scanf(" %19s", S[i].name);

        printf("Enter the address of student %d: ", i + 1);
        scanf(" %49s", S[i].address);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Roll number: %d\n", S[i].roll);
        printf("Name: %s\n", S[i].name);
        printf("Address: %s\n", S[i].address);
    }

    return 0;
}
