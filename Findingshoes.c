#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        if (M >= N)
            printf("%d\n", N);
        else
            printf("%d\n", 2 * N - M);
    }

    return 0;
}
