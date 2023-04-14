#include <stdio.h>

int A[10], N = 6;

int deleteSorted(int val)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (A[i] == val)
            break;
    }

    if (i == N)
        return -1;

    for (int j = i; j < N; j++)
        A[j] = A[j + 1];

    N--;
    return i;
}

int main()
{
    for (int i = 0; i < N; i++)
        A[i] = i * 3;

    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
    printf("\n");

    int idx = deleteSorted(9);
    if (idx != -1)
        printf("Deleted idx= %d\n", idx);
    else
        printf("Value Not found..\n");

    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
    printf("\n");
}