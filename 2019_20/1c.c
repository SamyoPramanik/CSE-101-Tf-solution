#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    switch (a > b)
    {
    case 1:
    {
        switch (a > c)
        {
        case 1:
        {
            printf("a is the boss");
            break;
        }

        case 0:
        {
            printf("a is not the boss");
            break;
        }

        default:
            break;
        }
        break;
    }

    case 0:
    {
        printf("a is not the boss");
        break;
    }

    default:
        break;
    }
}