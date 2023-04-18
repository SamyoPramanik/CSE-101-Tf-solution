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
    int color;
    scanf("%d", &color);
    printbinary(color);
    char *p = &color;

    int alpha = p[3];
    int blue = p[2];
    int green = p[1];
    int red = p[0];

    alpha = alpha < 0 ? 256 + alpha : alpha;
    red = red < 0 ? 256 + red : red;
    green = green < 0 ? 256 + green : green;
    blue = blue < 0 ? 256 + blue : blue;

    printf("red = %d\n", red);
    printbinary(red);
    printf("green = %d\n", green);
    printbinary(green);
    printf("blue = %d\n", blue);
    printbinary(blue);
    printf("alpha = %d\n", alpha);
    printbinary(alpha);
}