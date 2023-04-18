#include <stdio.h>
#include <string.h>
void strev(char *s)
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int search(char *str, char *query)
{
    strev(query);
    int j = 0, len = strlen(str);
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            str[i] = '\0';
            if (strcmp(str + j, query) == 0)
                return j;
            j = i + 1;
        }
    }

    return -1;
}
int main()
{
    char str[100], query[50];
    gets(str);
    scanf("%s", query);
    int ans = search(str, query);

    if (ans != -1)
        printf("idx = %d", ans);
    else
        printf("NOT FOUND");
}