#include <stdio.h>

double eval(double a[], double x, int n)
{
    double powerx = 1, result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += powerx * a[i];
        powerx *= x;
    }
    return result;
}

void add(double f[], double g[], double h[], int n)
{
    for (int i = 0; i <= n; i++)
        f[i] = g[i] + h[i];
}
int main()
{
    double a[] = {1, 2, 3, 4};
    double x = 0;
    int n = 3;
    double value = eval(a, x, n);
    printf("value = %lf\n", value);

    double f[10];
    double g[] = {2, 3, 4, 5, 6};
    double h[] = {1, 2, 3, 0, 0};
    int n1 = 4;
    add(f, g, h, 4);
    for (int i = 0; i <= n1; i++)
        printf("%lf ", f[i]);
}