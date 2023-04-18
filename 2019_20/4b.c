#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);

    char *p = strtok(str, " ");
    int count = 0;
    while (p)
    {
        count++;
        p = strtok(NULL, " ");
    }
    printf("number of words = %d", count);
}