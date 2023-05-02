#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    double *height = (double *)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
        scanf("%lf", &height[i]);

    double max = -9, min = 9999999999999999;
    for (int i = 0; i < n; i++)
    {
        if (height[i] > max)
            max = height[i];
        if (height[i] < min)
            min = height[i];
    }
    printf("Difference = %lf\n", max - min);
    free(height);
}