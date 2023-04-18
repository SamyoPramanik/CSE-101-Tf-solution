#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ifp = fopen("data.txt", "w");

    for (int i = 1; i <= 64; i++)
    {
        for (int j = 1; j <= 365; j++)
            fprintf(ifp, "%d %d %d %d %d\n", i, j, rand() % 31 + 10, rand() % 81, rand() % 101);
    }
    fclose(ifp);
}