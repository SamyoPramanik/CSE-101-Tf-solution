#include <stdio.h>
int CopyABit(int x, int n)
{
    x &= 1 << n;
    x <<= 31 - n;
    x >>= 31;
    return x;
}
int main()
{
    int x = 5;
    int n = 3;
    int val = CopyABit(x, n);
    printf("val = %d\n", val);
}