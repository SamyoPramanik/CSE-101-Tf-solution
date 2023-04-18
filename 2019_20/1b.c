#include <stdio.h>
int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    if (x % 2 == 0)
        x++;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", x);
        x += 2;
    }
}