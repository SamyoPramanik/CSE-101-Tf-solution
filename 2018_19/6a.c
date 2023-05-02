#include <stdio.h>

int largest(int x[], int n)
{
    if (n == 1)
        return *x;
    int next = largest(x + 1, n - 1);
    return *x > next ? *x : next;
}

int main()
{
    int ara[] = {1, 3, 4, 13, 4, 5};
    int n = 6;
    int largest_number = largest(ara, n);
    printf("largest number = %d", largest_number);
}