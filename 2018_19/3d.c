#include <stdio.h>

void printbinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        if (n & 1 << i)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

void reverse(int *n)
{
    int rev = 0;
    for (int i = 0; i < 32; i++)
    {
        if (*n & 1 << i)
            rev |= 1 << (31 - i);
    }
    *n = rev;
}

int main()
{
    int n;
    scanf("%d", &n);
    printbinary(n);
    reverse(&n);
    printf("%d\n", &n);
    printbinary(n);
}