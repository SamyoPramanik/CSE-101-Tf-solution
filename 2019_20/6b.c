#include <stdio.h>

void printbinary(int n)
{
    for (int i = 31, j = 0; i >= 0; i--, j++)
    {
        if (j == 8)
        {
            printf(" ");
            j = 0;
        }
        if (n & 1 << i)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
int main()
{
    unsigned int color;
    scanf("%u", &color);
    printbinary(color);
    int alpha = color >> 24;
    int blue = ((color >> 16) << 24) >> 24;
    int green = ((color >> 8) << 24) >> 24;
    int red = (color << 24) >> 24;

    printf("red = %u\n", red);
    printbinary(red);
    printf("green = %u\n", green);
    printbinary(green);
    printf("blue = %u\n", blue);
    printbinary(blue);
    printf("alpha = %u\n", alpha);
    printbinary(alpha);
}