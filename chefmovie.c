#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M, A, B, C;
        scanf("%d %d %d %d %d", &N, &M, &A, &B, &C);

        int pairs = (N < M) ? N : M;

        int cost = pairs * C;
        cost += (N - pairs) * A;
        cost += (M - pairs) * B;

        printf("%d\n", cost);
    }

    return 0;
}
