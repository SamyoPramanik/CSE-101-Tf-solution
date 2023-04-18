#include <stdio.h>

int rstrcmp(char s[], char t[], int i)
{
    if (s[i] == '\0' && t[i] == '\0')
        return 0;
    if (s[i] == t[i])
        return rstrcmp(s + i + 1, t + i + 1, 0);
    if (s[i] > t[i])
        return 1;
    return -1;
}

int main()
{
    char s[100], t[100];
    int i;
    scanf("%s %s %d", s, t, &i);
    int check = rstrcmp(s, t, i);
    printf("result = %d\n", check);
}