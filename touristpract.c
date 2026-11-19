#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) {
        return 0;
    }

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int min_dist = -1;
        for (int i = 0; i < N; i++) {
            int X, Y;
            scanf("%d %d", &X, &Y);

            int dist = abs(A - X) + abs(B - Y);
            if (min_dist == -1 || dist < min_dist) {
                min_dist = dist;
            }
        }

        printf("%d\n", min_dist);
    }

    return 0;
}
