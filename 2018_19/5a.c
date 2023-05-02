#include <stdio.h>

int main()
{
    int x[3], y[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    if (x[0] <= x[2] && x[2] <= x[1] && y[1] <= y[2] && y[2] <= y[0])
        printf("Inside the rectangle\n");
    else
        printf("Outside the rectangle\n");
}