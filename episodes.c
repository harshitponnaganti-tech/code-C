#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int total = N * K;

        int H = total / 60;
        int M = total % 60;

        printf("%d %d\n", H, M);
    }

    return 0;
}
