#include <stdio.h>
int isPositive(int x)
{
    x ^= 1 << 31;
    x >>= 31;
    return x;
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", isPositive(x));
}