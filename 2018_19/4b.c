#include <stdio.h>
#define SQ(x) ((x) * (x))
#define CUBE(x) (SQ(x) * (x))
#define F_POW(x) (CUBE(x) / SQ(SQ(x)))

int main()
{
    double x;
    scanf("%lf", &x);
    double result = F_POW(x);
    printf("result = %lf", result);
}