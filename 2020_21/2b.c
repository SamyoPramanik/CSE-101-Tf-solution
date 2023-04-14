#include <stdio.h>
int main()
{
    int a = 0x7c5;
    float x = 13.25;
    printf("%-07x %#7g %10.2e", a, x, x);
}