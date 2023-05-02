#include <stdio.h>
int main()
{
    double cost = 0, unit;
    scanf("%lf", &unit);

    if (unit >= 100)
    {
        cost += 100 * 1.0;
        unit -= 100;
    }
    else
    {
        cost += unit * 1.0;
        unit = 0;
    }

    if (unit >= 150)
    {
        cost += 150 * 1.25;
        unit -= 150;
    }
    else
    {
        cost += unit * 1.25;
        unit = 0;
    }

    if (unit > 0)
        cost += unit * 1.5;

    printf("Total cost = %.2lf", cost);
}