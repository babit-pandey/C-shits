// to find average marks of M subjects of N students
#include <stdio.h>
struct student
{
    char name[20];
    int marks[10]; // Change the array size to accommodate 'm' subjects
    int total;
    float average;
};

int main()
{
    int n, m, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    struct student S[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the data of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", S[i].name);

        S[i].total = 0;

        for (j = 0; j < m; j++)
        {
            printf("Enter the marks for subject %d: ", j + 1);
            scanf("%d", &S[i].marks[j]);
            S[i].total += S[i].marks[j];
        }

        S[i].average = (float)S[i].total / m;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nData for student %d:\n", i + 1);
        printf("Name: %s\n", S[i].name);
        printf("Average marks: %.2f\n", S[i].average);
    }

    return 0;
}
