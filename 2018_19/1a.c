#include <stdio.h>
int main()
{
    for (int n = 1; n <= 5; n++)
        for (int i = 1; i < n; i++)
            printf("%d%c", i, (i == n - 1) ? '\n' : ',');
}