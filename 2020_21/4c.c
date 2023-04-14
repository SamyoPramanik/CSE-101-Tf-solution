#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reorder(int n, char (*list)[20])
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(list[i], list[j]) > 0)
            {
                char temp[20];
                strcpy(temp, list[i]);
                strcpy(list[i], list[j]);
                strcpy(list[j], temp);
            }
        }
}

int main()
{
    char countries[100][20];
    int n = 0;
    while (1)
    {
        char name[20];
        scanf("%s", name);
        if (strcmp(name, "end") == 0)
            break;
        strcpy(countries[n++], name);
    }
    reorder(n, countries);
    for (int i = 0; i < n; i++)
        printf("%s\n", countries[i]);
}
