#include <stdio.h>

int check_parity(unsigned int n)
{
    int bit = 0;
    for (int i = 0; i < 32; i++)
        if (n & 1 << i)
            bit++;

    return bit % 2;
}

int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf(check_parity(n) ? "Odd parity" : "even parity");
}