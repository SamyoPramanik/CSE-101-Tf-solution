#include <stdio.h>
int main()
{
    int fib[100];
    fib[0] = fib[1] = 1;
    int sum = 2, n, i = 1, isFib = 0;
    scanf("%d", &n);

    if (n == 1)
        isFib = 1;
    else
    {
        while (i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            if (fib[i] == n)
                isFib = 1;
            if (fib[i] <= n)
                sum += fib[i];
            else
                break;
        }
    }

    printf("%s\n", isFib ? "YES" : "NO");
    printf("sum = %d", sum);
}