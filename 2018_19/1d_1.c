#include <stdio.h>
int main()
{
    FILE *ifp = fopen("1d.c", "r");
    FILE *ofp = fopen("rcopy1.c", "w");
    fseek(ifp, 0, SEEK_END);
    int size = ftell(ifp);
    while (size-- > -1)
    {
        char ch;
        fscanf(ifp, "%c", &ch);
        fprintf(stdout, "%c", ch);
        fseek(ifp, size * sizeof(char), SEEK_SET);
    }
}