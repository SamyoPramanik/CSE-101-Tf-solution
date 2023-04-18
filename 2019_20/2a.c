#include <stdio.h>

int truncate(float x)
{
    return x;
}

int rounding(float x)
{
    int max = x;
    int min = max - 1;
    float avg = ((max + min) * 1.0) / 2;
    if (x >= avg)
        return max;
    else
        return min;
}

int ceiling(float x)
{
    return x;
}

int main()
{
    float x;
    scanf("%f", &x);
    printf("truncate x = %d\n", truncate(x));
    printf("rounding x = %d\n", rounding(x));
    printf("ceiling x = %d\n", ceiling(x));
}