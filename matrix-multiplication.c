#include <stdio.h>
void main()
{
    int r, c, i, j, k, p;
    printf("how many rows you want in your matrix: \n");
    scanf("%d", &r);
    printf("how many columns you want in your matrix: \n");
    scanf("%d", &c);

    // matrix 1
    printf("Enter the elements of first matrix: \n");
    int m[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the %d%d element: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // matrix 2
    printf("Enter the elements of second matrix: \n");
    int n[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the %d%d element: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    // multiplying matrix
    int mul[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            p = 0;
            for (k = 0; k < c; k++)
            {
                p += m[i][k] * n[k][j];
            }
            mul[i][j] = p;
        }
    }

    // printing
    printf("the product of the matrix is: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}