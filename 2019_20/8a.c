#include <stdio.h>

int main(int agrc, char *argv[])
{
    if (agrc < 3)
        printf("not enough argument");
    FILE *ifp = fopen(argv[1], "r");
    FILE *ofp = fopen(argv[2], "w");

    if (ifp == NULL)
    {
        printf("source file opening failed..\n");
        return -1;
    }

    if (ofp == NULL)
    {
        printf("destination file creation failed..\n");
        return -1;
    }

    char ch;
    while (fscanf(ifp, "%c", &ch) != EOF)
        fprintf(ofp, "%c", ch);

    printf("file successfully copied..\n");

    fclose(ifp);
    fclose(ofp);
}