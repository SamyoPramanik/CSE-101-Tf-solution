#include <stdio.h>

double sin(double x)
{
    const double pi = 3.1415926535898;
    x = pi * x / 180;
    double sinx = x;
    double pre = x;
    for (int i = 3; i <= 11; i += 2)
    {
        pre = (-1) * pre * x * x / (i - 1) / i;
        sinx += pre;
    }
    return sinx;
}

int main()
{
    double x;
    scanf("%lf", &x);
    printf("sin %.4lf=%.4lf", x, sin(x));
}