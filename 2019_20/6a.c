#include <stdio.h>

int check_palindrome(unsigned int x, int bitlen)
{
    for (int i = 0, j = bitlen - 1; i < j; i++, j--)
    {
        int first = (x & 1 << i) ? 1 : 0;
        int last = (x & 1 << j) ? 1 : 0;
        if (first != last)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned int x;
    int bitlen;
    scanf("%u %d", &x, &bitlen);
    printf("%s", check_palindrome(x, bitlen) ? "Palindrome" : "Not palindrome");
}