#include <stdio.h>

int add(int d, int n)
{
    if (n == 0)
        return d;

    return add(d, n / 10) * 10 + n % 10;
}

int main()
{
    int d, n;
    scanf("%d %d", &n, &d);
    int new_number = add(d, n);
    printf("%d\n", new_number);
}