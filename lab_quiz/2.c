#include <stdio.h>
#include <stdlib.h>
double square(double x)
{
    return x * x;
}
double cube(double x)
{
    return x * x * x;
}
double average(double *numbers, int count, double (*fn)(double))
{
    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += fn(numbers[i]);
    }
    return sum / count;
}
double *take_input(int count)
{
    double *numbers = (double *)calloc(count, sizeof(double));
    double *initial = numbers;
    while (count--)
    {
        scanf("%lf", numbers);
        numbers++;
    }
    return initial;
}
int main()
{
    int n;
    scanf("%d", &n);
    double *(*t_input)(int) = &take_input;
    double *ara = t_input(n);
    double (*find_avg)(double *, int, double (*fn)(double)) = &average;
    double sq_avg = find_avg(ara, n, square);
    printf("square average = %lf\n", sq_avg);
    double cube_avg = find_avg(ara, n, cube);
    printf("cube average = %lf\n", cube_avg);
}