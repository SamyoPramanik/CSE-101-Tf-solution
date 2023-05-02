#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                ara[i][j] = -1;
            else if (i + j == n - 1)
                ara[i][j] = 0;
            else
                ara[i][j] = 1;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%2d ", ara[i][j]);
        printf("\n");
    }
}