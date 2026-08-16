#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int C[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &C[i]);
        }

        // Sort in descending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (C[i] < C[j]) {
                    int temp = C[i];
                    C[i] = C[j];
                    C[j] = temp;
                }
            }
        }

        int total = 0;

        for (int i = 0; i < K; i++) {
            total += C[i];
        }

        printf("%d\n", total);
    }

    return 0;
}
