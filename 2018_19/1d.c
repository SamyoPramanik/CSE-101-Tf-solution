#include <stdio.h>
void reverse(char *s, int len)
{
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
int main()
{
    FILE *ifp = fopen("1d.c", "r");
    FILE *ofp = fopen("rcopy.c", "w");
    char str[1000], ch;
    int i = 0;
    while (fscanf(ifp, "%c", &ch) != EOF)
        str[i++] = ch;
    fclose(ifp);
    puts(str);

    reverse(str, i);
    puts(str);
    for (int j = 0; j < i; j++)
        fprintf(ofp, "%c", str[j]);
    fclose(ofp);
}