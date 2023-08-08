#include <stdio.h>

struct marks
{
    int phy, chem, comp, maths, eng;
};

struct info
{
    char name[20];
    int roll;
    struct marks marks;
    int total;
    float percentage;
};

int main()
{
    int n, i;
    printf("Required no. of data: ");
    scanf("%d", &n);

    struct info I[n];

    for (i = 0; i < n; ++i)
    {
        printf("\nEnter the details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", I[i].name);
        printf("Enter Roll No.: ");
        scanf("%d", &I[i].roll);
        printf("Physics Marks: ");
        scanf("%d", &I[i].marks.phy);
        printf("Chemistry Marks: ");
        scanf("%d", &I[i].marks.chem);
        printf("Computer Science Marks: ");
        scanf("%d", &I[i].marks.comp);
        printf("Maths Marks: ");
        scanf("%d", &I[i].marks.maths);
        printf("English Marks: ");
        scanf("%d", &I[i].marks.eng);

        I[i].total = I[i].marks.phy + I[i].marks.chem + I[i].marks.comp + I[i].marks.maths + I[i].marks.eng;
        I[i].percentage = I[i].total / 5;
    }

    printf("\nThe data is as follows:\n\n");
    printf("S\\N\tName\tRoll No.\tPhy\tChem\tComp\tMath\tEng\tTotal\tPercentage\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n",
               i + 1, I[i].name, I[i].roll,
               I[i].marks.phy, I[i].marks.chem, I[i].marks.comp,
               I[i].marks.maths, I[i].marks.eng, I[i].total, I[i].percentage);
    }

    return 0;
}
