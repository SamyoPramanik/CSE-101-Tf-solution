#include <stdio.h>

void sort(int ara[], int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    sort(ara, l, mid);
    sort(ara, mid + 1, r);
    int i = l, j = mid + 1, k = 0, temp[r - l + 1];
    while (i <= mid || j <= r)
    {
        if (i > mid)
            temp[k++] = ara[j++];
        else if (j > r)
            temp[k++] = ara[i++];
        else if (ara[i] <= ara[j])
            temp[k++] = ara[i++];
        else
            temp[k++] = ara[j++];
    }
    for (i = l, k = 0; i <= r; i++)
        ara[i] = temp[k++];
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int ara1[n1], ara2[n2];

    for (int i = 0; i < n1; i++)
        scanf("%d", &ara1[i]);

    for (int i = 0; i < n2; i++)
        scanf("%d", &ara2[i]);

    sort(ara1, 0, n1 - 1);
    sort(ara2, 0, n2 - 1);

    for (int i = 0, j = 0; i < n1;)
    {
        if (ara1[i] < ara2[j])
        {
            printf("%d ", ara1[i]);
            i++;
        }
        if (ara1[i] > ara2[j])
            j++;
        else
        {
            j++;
            i++;
        }
    }
}