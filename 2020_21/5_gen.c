#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("in.txt", "w", stdout);
    int n = 100;
    while (n--)
    {
        int len = rand() % 50 + 1;
        if (n % 2)
        {
            for (int i = 0; i < len; i++)
                printf("%c", rand() % 26 + 65);
        }
        else
        {
            if (len % 2 == 0)
            {
                char str[len / 2 + 1];
                str[len / 2] = '\0';
                for (int i = 0, j = len / 2 - 1; i < len / 2; i++, j--)
                {
                    char c = rand() % 26 + 65;
                    printf("%c", c);
                    str[j] = c;
                }
                printf("%s", str);
            }
            else
            {
                char str[len / 2 + 1];
                str[len / 2] = '\0';
                for (int i = 0, j = len / 2 - 1; i < len / 2; i++, j--)
                {
                    char c = rand() % 26 + 65;
                    printf("%c", c);
                    str[j] = c;
                }
                printf("%c", rand() % 26 + 65);
                printf("%s", str);
            }
        }

        printf(" ");
        len = rand() % 10 + 1;
        printf("%d", rand() % 10 + 1);
        for (int i = 0; i < len; i++)
            printf("%d", rand() % 10);

        printf("\n");
    }
}