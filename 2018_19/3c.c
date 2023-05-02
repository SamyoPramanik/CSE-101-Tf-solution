#include <stdio.h>

int ALTERSUM(int N, int M, int B[][M])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            sum += B[i][j];
    return sum;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int ara[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &ara[i][j]);
    int sum = ALTERSUM(N, M, ara);
    printf("sum = %d\n", sum);
}