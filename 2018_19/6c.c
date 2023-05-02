#include <stdio.h>
int length(char s[])
{
    if (!*s)
        return 0;
    return 1 + length(s + 1);
}

int main()
{
    char str[] = "abrakadabra";
    int len = length(str);
    printf("len = %d", len);
}