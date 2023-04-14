#include <stdio.h>
#include <stdlib.h>
char *dbl_dbl(char *str, char c)
{
    char *doubled = (char *)malloc(100 * sizeof(char));
    char *i = doubled;
    while (*str)
    {
        *(i++) = *str;
        if (*(str++) == c)
            *(i++) = c;
    }
    *i = '\0';
    return doubled;
}
int main()
{
    char str[100], *doubled, c;
    scanf("%s %c", str, &c);
    doubled = dbl_dbl(str, c);
    printf("%s\n", doubled);
}