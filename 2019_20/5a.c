#include <stdio.h>

int main()
{
    int n = 5;
    int numbers[] = {1, 2, 2, 3, 3};

    int asce = 1, desc = 1, i = 1, sorted = 1;

    for (i = 1; i < n; i++)
    {
        if (*(numbers + i) > *(numbers + i - 1))
        {
            desc = 0;
            break;
        }
        else if (*(numbers + i) < *(numbers + i - 1))
        {
            asce = 0;
            break;
        }
    }

    for (int j = i + 1; j < n; j++)
    {
        if (asce)
        {
            if (*(numbers + j) < *(numbers + j - 1))
            {
                sorted = 0;
                break;
            }
        }
        else if (desc)
        {
            if (*(numbers + j) > *(numbers + j - 1))
            {
                sorted = 0;
                break;
            }
        }
    }
    printf("%s\n", sorted ? "Sorted" : "Not sorted");
}