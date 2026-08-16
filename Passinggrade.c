#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int count = 0;

        for (int i = 0; i < N; i++) {
            if (A[i] >= A[0]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
