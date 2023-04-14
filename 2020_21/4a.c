#include <stdio.h>
#include <stdlib.h>
int main()
{
    double ***A = (double ***)malloc(10 * sizeof(double **));
    for (int i = 0; i < 10; i++)
        *(A + i) = (double **)malloc(20 * sizeof(double *));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 20; j++)
        {
            *(*(A + i) + j) = (double *)malloc(30 * sizeof(double));
        }

    A[9][19][29] = 900;
    printf("%lf\n", *(*(*(A + 9) + 19) + 29));
}