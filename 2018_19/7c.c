#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int **matrix = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        matrix[i] = (int *)malloc(col * sizeof(int));
    }
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    double *colavg = (double *)malloc(col * sizeof(double));
    for (int i = 0; i < col; i++)
        for (int j = 0; j < row; j++)
            colavg[i] += (matrix[j][i] * 1.0) / row;

    for (int i = 0; i < col; i++)
        printf("%lf ", colavg[i]);

    free(colavg);
    for (int i = 0; i < row; i++)
        free(matrix[i]);
    free(matrix);
    return 0;
}