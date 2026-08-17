#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long max = 0;
        long long height;

        for (int i = 0; i < N; i++) {
            scanf("%lld", &height);

            if (height > max) {
                max = height;
            }
        }

        printf("%lld\n", max);
    }

    return 0;
}
