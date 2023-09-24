#include <stdio.h>

int main()
{
    int num[10];

    printf("Enter 10 integer numbers:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    FILE *unsorted = fopen("unsorted.dat", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(unsorted, "%d\n", num[i]);
    }

    fclose(unsorted);

    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    FILE *sort = fopen("sorted.dat", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(sort, "%d\n", num[i]);
        printf("%d\n", num[i]);
    }

    fclose(sort);

    return 0;
}
