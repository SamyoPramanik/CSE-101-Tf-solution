#include <stdio.h>
#include <stdlib.h>

int **multiply(int **mat1, int **mat2, int r1, int c1, int r2, int c2)
{
    int **mat3 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++)
    {
        *(mat3 + i) = (int *)malloc(c2 * sizeof(int));
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(*(mat3 + i) + j) = 0;
            for (int k = 0; k < c1; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    return mat3;
}

int main()
{
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;
    printf("r1: ");
    scanf("%d", &r1);
    printf("c1: ");
    scanf("%d", &c1);
    printf("r2: ");
    scanf("%d", &r2);
    printf("c2: ");
    scanf("%d", &c2);

    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++)
    {
        *(mat1 + i) = (int *)malloc(c1 * sizeof(int));
    }

    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    for (int i = 0; i < r2; i++)
    {
        *(mat2 + i) = (int *)malloc(c2 * sizeof(int));
    }

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            mat1[i][j] = i + j;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            mat2[i][j] = i + j;

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
        {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    printf("\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
        {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }

    int **mat3 = multiply(mat1, mat2, r1, c1, r2, c2);
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r1; i++)
    {
        free(*(mat1 + i));
    }
    free(mat1);

    for (int i = 0; i < r2; i++)
    {
        free(*(mat2 + i));
    }
    free(mat2);

    for (int i = 0; i < r1; i++)
    {
        free(*(mat3 + i));
    }
    free(mat3);
}