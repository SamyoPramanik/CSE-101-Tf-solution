#include <stdio.h>
int main()
{
    double cost = 0, unit;
    scanf("%lf", &unit);
    cost += (unit >= 100) * 100 + (unit < 100) * unit;
    unit -= (unit >= 100) * 100 + (unit < 100) * unit;
    cost += (unit >= 150) * 150 * 1.25 + (unit < 150) * unit * 1.25;
    unit -= (unit >= 150) * 150 + (unit < 150) * unit;
    cost += (unit > 0) * unit * 1.5;
    printf("Total cost = %.2lf", cost);
}