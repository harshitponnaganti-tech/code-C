#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int ans = N - K;

        if (K < ans) {
            ans = K;
        }

        printf("%d\n", ans);
    }

    return 0;
}
