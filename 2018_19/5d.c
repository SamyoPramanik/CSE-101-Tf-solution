#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    if (++i)
    {
        int i = 50;
        printf("%d\n", i++);
    }
    printf("%d\n", i);
    return 0;
}