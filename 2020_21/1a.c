#include <stdio.h>
int main()
{
    int i = 8, j = 5, k;
    float x = .005, y = -.01;
    char c = 'c', d = 'd';

    k = (i - 3 * j) % (c + 2 * d) / (x - y);
    printf("%d\n", k);

    printf("%d\n", 10 % 4 / 2);
}