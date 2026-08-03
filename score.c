#include <stdio.h>

int main() {
    int T, X, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &N);
        printf("%d\n", (X / 10) * N);
    }

    return 0;
}
