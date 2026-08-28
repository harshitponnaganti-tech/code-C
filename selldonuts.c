#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        int A[101];

        for (int i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }

        int sad = 0;

        for (int i = 0; i < M; i++) {
            int B;
            scanf("%d", &B);

            if (A[B] > 0) {
                A[B]--;       // Give the donut to customer
            } else {
                sad++;        // No donut left
            }
        }

        printf("%d\n", sad);
    }

    return 0;
}
