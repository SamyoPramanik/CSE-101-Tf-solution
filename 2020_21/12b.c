#include <stdio.h>
#define SQ(x) ((x) * (x))
#define CUB(x) (SQ(x) * (x))
#define F_POW(x) (CUB(x) / CUB(SQ(x)))

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf\n", F_POW(x));
}