#include <stdio.h>
void printBinary(unsigned int x)
{
    if (x == 0)
    {
        printf("0");
        return;
    }
    else
    {
        if (x == 1)
        {
            printf("1");
            return;
        }
        printBinary(x >> 1);
        printf("%c", x & 1 ? '1' : '0');
    }
}

int main()
{
    unsigned int x = 1;
    printBinary(x);
}