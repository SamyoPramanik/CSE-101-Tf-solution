#include <stdio.h>

void swap_swag(unsigned int *a, unsigned int *b)
{
    *a = *a << 32 | b;
    *b = *a >> 32;
}
int main()
{
    unsigned int a = 1234, b = 2939;
    printf("a=%u b=%u\n", a, b);
    swap_swag(&a, &b);
    printf("a=%u b=%u\n", a, b);
}