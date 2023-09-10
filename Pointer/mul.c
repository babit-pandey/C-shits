#include <stdio.h>

void mul(int r1, int c1, int c2)
{
    int i, j, k;
    int res[r1][c2];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2, i, j;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of matrix 1:\n");
    int m1[r1][c1];

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible. Columns of matrix 1 must be equal to rows of matrix 2.\n");
        return 1;
    }

    printf("Enter the elements of matrix 2:\n");
    int m2[r2][c2];

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    mul(r1, c1, c2);

    return 0;
}
